using System.Collections;
using System.Collections.Generic;
using System.Text;
using Unity.VisualScripting;
using Unity.VisualScripting.Antlr3.Runtime.Tree;
using UnityEditor.PackageManager;
using UnityEditor.VersionControl;
using UnityEngine;
using UnityEngine.UIElements;

public class NetworkGameObject : MonoBehaviour
{

    public bool locallyOwned;
    public int networkID;
    public int localID = 1;
    public static int lastAssignedLocalID;    // variables
    public HealthSystem healthSystem;
    public ScoreSystem scoreSystem;
    NetworkManager netMan;
    public bool isReady;

    private void Awake()
    {
        isReady = false;
        healthSystem = GetComponent<HealthSystem>();
        scoreSystem = FindAnyObjectByType<ScoreSystem>();
        if (locallyOwned == true)  // increment local Id if it is locally owned
        {
            localID = lastAssignedLocalID + 1;
            lastAssignedLocalID = localID;
        }
    }

    public byte[] ToPacket()  // collects the transform data of an object so it can be sent as a byte array
    {
        string packet = "UnityNetworkIDPos:" + networkID + ":" + transform.position.x + ":" + transform.position.y + ":" + transform.position.z +
            ":" + transform.rotation.x + ":" + transform.rotation.y + ":" + transform.rotation.z + ":" + transform.rotation.w + ":" + scoreSystem.score;

        Debug.Log(packet);
        
        byte[] array = Encoding.ASCII.GetBytes(packet);

        return array;
    }
    public byte[] ToPacketHealth()  // collects the transform data of an object so it can be sent as a byte array
    {

        string packet = "NetworkIDHealth:" + networkID + ":" + healthSystem.health;

        Debug.Log("To Packet Health =" + packet);

        byte[] array = Encoding.ASCII.GetBytes(packet);

        return array;
    }
    public void FromPacket(string packet)
    {

        string[] substrings = packet.Split(':');   // splits initial recieved string to check which type of packet it is
                                                   //once the packet is determined run the following function
        if (substrings[0].Contains("NetworkIDHealth"))
        {
            UpdateHealth(packet);
        } 
        if (substrings[0].Contains("UnityNetworkIDPos"))
        {
            UpdateUnityPos(packet);
        }
        if (substrings[0].Contains("UnrealNetworkID"))
        {
            //Debug.Log("updating unreal pos with: " + packet);
            UpdateUnrealPos(packet);
        }
    }
    public void UpdateUnityPos(string packet)           // function to update a unity objects position
    {
        string[] substrings = packet.Split(':');

        int.TryParse(substrings[1], out int ID);
        if (networkID == ID)                             // checks to see if the network ID for the object is the same from the packet
        {
            int newScore;
            float posx, posy, posz, rotx, roty, rotz, rotw;

 
            float.TryParse(substrings[2], out posx);
            float.TryParse(substrings[3], out posy);
            float.TryParse(substrings[4], out posz);
            float.TryParse(substrings[5], out rotx);     // parsing values from the recieved packet
            float.TryParse(substrings[6], out roty);
            float.TryParse(substrings[7], out rotz);
            float.TryParse(substrings[8], out rotw);
            int.TryParse(substrings[9], out newScore);

            this.scoreSystem.score = newScore;

            Vector3 newPosition = new Vector3(posx, posy, posz);        // saving the parsed values as a vector3 for new position

            transform.position = newPosition;        // setting position of the object to the new position

            Quaternion newRotation = new Quaternion(rotx, roty, rotz, rotw);   // same for rotation 

            transform.rotation = newRotation;
        }
    }
    public void UpdateUnrealPos(string packet)        // function to update an unreal objects position
    {
        string[] substrings = packet.Split(':');

        int.TryParse(substrings[1], out int otherID);

        if (networkID == otherID)
        {
            float posx, posy, posz, rotx, roty, rotz, rotw;
            int newScore;


            float.TryParse(substrings[2], out posx);
            float.TryParse(substrings[3], out posy);
            float.TryParse(substrings[4], out posz);
            float.TryParse(substrings[5], out rotx);     // parsing values from the recieved packet
            float.TryParse(substrings[6], out roty);
            float.TryParse(substrings[7], out rotz);
            float.TryParse(substrings[8], out rotw);

            int.TryParse(substrings[9], out newScore);

            this.scoreSystem.score = newScore;
            //Debug.Log("posx =" +posx);
            //Debug.Log("posx =" + posx);
            //Debug.Log("posx =" + posx);

            posz -= 98.212498f;   // need to - transform difference to get the character to 0
            Vector3 newPosition = new Vector3(posy / 100, posz / 100, posx / 100);    // moved parsed values to convert unreal to unity coordinate system  

            
            // /100 to covert the cm into m 
            transform.position = newPosition;

            Quaternion newRotation = new Quaternion(roty, rotz, rotx, rotw);

            transform.rotation = newRotation;
        }
    }
    public void UpdateHealth(string packet) 
    {
        string[] substrings = packet.Split(':');
        int id;
        int.TryParse(substrings[1], out id);
        float health;
        float.TryParse(substrings[2], out health);



        if (networkID == id)  // check the object
        {
            HealthSystem player = this.GetComponent<HealthSystem>(); // get the health system for the object

            if (player.health !=  health) 
            {
                Debug.Log("updating health for " + substrings[1]); // read the packet and set the health from the packet

                player.health = health;
            }

        }
       
    }
}