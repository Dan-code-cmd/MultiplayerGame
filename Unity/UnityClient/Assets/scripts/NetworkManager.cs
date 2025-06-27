using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using Unity.VisualScripting;
using UnityEditor.VersionControl;
using System.Data.SqlTypes;



public struct UdpState
{
    UdpClient u;
    IPEndPoint e;

}

public class NetworkManager : MonoBehaviour
{
    static UdpState state;
    public static UdpClient client;
    static IPEndPoint ep;

    public string receiveString;
    public GameObject playerPrefab;
    public List<NetworkGameObject> networkObjects;
    public List<NetworkGameObject> worldState;
    IEnumerator SendNetworkUpdates()    // coroutine for sending information to this server
    {
        while (true)
        {
            List<NetworkGameObject> networkGameObjects = new List<NetworkGameObject>(); //creating a list of networkobjects
            networkGameObjects = networkObjects; 


            for (int i = 0; i < networkGameObjects.Count; i++)
            {
                if (networkGameObjects[i].locallyOwned == true && networkGameObjects[i].networkID != 0) // for all the objects in the list if its locally owned and has a valid network ID
                {
                    //Debug.Log("running to packet");
                    byte[] data = networkGameObjects[i].ToPacket(); // convert the packet to bytes
                    client.Send(data, data.Length); //send data to the server
                }
            }
            yield return new WaitForSeconds((float)0.2); // wait 0.2 seconds between each send
        }

    }
    IEnumerator UpdateWorldState()
    {
        while (true) 
        {
            string tempString = receiveString;   // saving the string 
            string nonsplit = receiveString;

            //Debug.Log(tempString);
            if (receiveString.Contains("NetworkIDHealth"))    // check to see if the recieved packet is a health packet
            {
                
                string[] substrings = receiveString.Split(':');   // split the string using the delimeter :

                int.TryParse(substrings[1], out int ID); // parse the first string and convert it to an int to be used

                for (int i = 0; i < worldState.Count; i++)  // for all the networkgameobjects within the worldstate list
                {
                    if (worldState[i].networkID == ID)  // if the parsed id from the packet matches the ID for the object
                    {
                        if (worldState[i].locallyOwned == true && worldState[i].healthSystem.health == 0) // check to see if the health is 0 and if its locally owned
                        {

                        }
                        if (worldState[i].locallyOwned == true && worldState[i].healthSystem.health != 0) // if the health is not 0 and its locally owned send the string to the from packet function
                        {
                            Debug.Log("using health string" + receiveString);
                            worldState[i].FromPacket(tempString); 
                        }
                    }

                }
            }
            if (receiveString.Contains("NetworkID")) // check to see if the packet contains "networkID" for the position update
            {
                
                string[] substrings = receiveString.Split(':'); //split the packet using : 

                int.TryParse(substrings[1], out int ID); // get the ID from the packet

                bool isFound = false; // set new bool to false
     
                for (int i = 0; i < worldState.Count; i++) // for all the objects in worldstate
                {
                    if (worldState[i].networkID == ID) // if the ID matches between the packet and the object
                    {
                        isFound = true; // set that the object has been found

                        if (worldState[i].locallyOwned != true) // if the object is not locally owned
                        {
                            //Debug.Log("running from packet function with :" + tempString);
                            worldState[i].FromPacket(tempString); // send the information to the from packet to be used
                        }


                    }

                }
                if (!isFound)  // when an object is not found 
                {
                    GameObject newPlayerobj = Instantiate(playerPrefab); // create a new enemy
                    NetworkGameObject newPlayer = newPlayerobj.GetComponent<NetworkGameObject>();  // get the networkgameobject component
                    newPlayer.networkID = ID; // set the ID of the new player to the recieved packet ID
                    worldState.Add(newPlayer);  // add the new player to the world state list
                    newPlayer.FromPacket(tempString);  // use the packet to calculate its position 
                }
            }
            else
            {
                Debug.Log("recieved message not being used: " + tempString);
            }
            yield return new WaitUntil(() => receiveString != tempString);  // when the object is not changing dont force updates
        }
       
    }

    void ReceiveAsyncCallBack(IAsyncResult result)
    {
        //Get the packet
        byte[] receiveBytes = client.EndReceive(result, ref ep);


        //Decode the packet 
        receiveString = Encoding.ASCII.GetString(receiveBytes);
        //Debug.Log("Full string: " + receiveString);

        if (receiveString.Contains("Assigned UID;"))  // check to see the recieved packet contains the global id message
        {
            int localIDsen = receiveString.IndexOf(';');   // split using various sentinal characters
            int localIDsen2 = receiveString.IndexOf('+');
            int globalIDsen = receiveString.IndexOf(":");

            string substring = receiveString.Substring(localIDsen + 1, localIDsen2 - localIDsen - 1);  


            int.TryParse(substring, out int localID);
            substring = receiveString.Substring(globalIDsen + 1);  
            int.TryParse(substring, out int globalID);   // get the local id and global id from the packet

            for (int i = 0; i < networkObjects.Count; i++)  // for the network objects
            {

                if (networkObjects[i].localID == localID)  // check to see if the local id matches the packet 
                {

                    networkObjects[i].networkID = globalID;  // assign the global id recieved from the server
                }
            }

        }

        //Self-callback, meaning this loops infinitely 
        //The same function you used in the Start() function

        //Function description in documentation = Receives a datagram from a remote host asynchronously.
        client.BeginReceive(ReceiveAsyncCallBack, state);


    }

    void Start()
    {
        networkObjects = new List<NetworkGameObject>();
        worldState = new List<NetworkGameObject>();                         // initialize lists
        worldState.AddRange(FindObjectsOfType<NetworkGameObject>());
  

        StartCoroutine(SendNetworkUpdates());   // start coroutines
        StartCoroutine(UpdateWorldState());

        string IPaddress = "127.0.0.1";
        IPAddress address = IPAddress.Parse(IPaddress);        
        int port = 9050;

        IPEndPoint ep = new IPEndPoint(address, port);

        client = new UdpClient();

        client.Connect(ep);

        Debug.Log("client complete");

        string myMessage = "I'm a Unity client - Hi!";
        byte[] array = Encoding.ASCII.GetBytes(myMessage);
        client.Send(array, array.Length);

        client.BeginReceive(ReceiveAsyncCallBack, state);

        
        networkObjects.AddRange(FindObjectsOfType<NetworkGameObject>());

        RequestUIDs();

    }

    private void RequestUIDs()
    {
        foreach (NetworkGameObject obj in networkObjects)         // for each networkgameobject in the networkobjects list
        {
            if (obj.locallyOwned == true && obj.networkID == 0)    // check if the object is locally owned and doesnt have a network id
            {
                string hi = "hello can i have number pls/" + obj.localID;
                byte[] array = Encoding.ASCII.GetBytes(hi);
                client.Send(array, array.Length);   // send a request to the server to get a global ID

            }
            else
            {

            }
        }
    }

}