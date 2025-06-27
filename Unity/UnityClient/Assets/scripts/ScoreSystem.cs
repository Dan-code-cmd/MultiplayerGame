using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class ScoreSystem : MonoBehaviour
{
    public HealthSystem healthSystem;
    public NetworkManager networkManager;
    public GameObject[] spawnPoints;
    public int score;
    public int playersReady;
    public bool gameEnded;
    int numberofSpawnPoints;
    // Start is called before the first frame update
    void Start()
    {
        numberofSpawnPoints = 4;

        spawnPoints = GameObject.FindGameObjectsWithTag("Respawn");
 
        score = 0;
        gameEnded = false;
        networkManager = FindAnyObjectByType<NetworkManager>();
    }

    // Update is called once per frame
    void Update()
    {
        UpdateScore();

        for (int i = 0; i < networkManager.networkObjects.Count; i++)  // look through all players
        {
            if (networkManager.networkObjects[i].scoreSystem.score == 1000) // check if any player has 1000 score
            {
                gameEnded = true;    // set and game to true
                if (gameEnded == true) 
                {
                    networkManager.networkObjects[i].healthSystem.alive = false;  // set all players to not alive so they cant do stuff

                    if (Input.GetKeyDown(KeyCode.F) && networkManager.networkObjects[i].locallyOwned == true)   // if the player presses the F key
                    {
                        networkManager.networkObjects[i].isReady = true;   // set ready to true
                        //display whichever ID won the match with an overlay also make all players unable to move
                        //with a ready bool if a player presses any key set the bool to true
                        //once all players are ready set all numbers to default and set the location of the players to the spawn locations
                        if (networkManager.networkObjects[i].isReady == true)  // if ready is true increment the amount of players ready
                        {
                            playersReady++;
                        }
                       
                    }
                    if (playersReady == 2)  // when there are 2 players ready enable all components for players and spawn them at different spawn positions and reset values
                    {
                        gameEnded = false;
                        networkManager.networkObjects[i].healthSystem.alive = true;
                        networkManager.networkObjects[i].isReady = false;
                        networkManager.networkObjects[i].scoreSystem.score = 0;
                        networkManager.networkObjects[i].transform.SetPositionAndRotation(spawnPoints[i].transform.position, spawnPoints[i].transform.rotation);
                        networkManager.networkObjects[i].healthSystem.health = healthSystem.maxHealth;
                        byte[] hitData = networkManager.networkObjects[i].GetComponent<NetworkGameObject>().ToPacketHealth();
                        NetworkManager.client.Send(hitData, hitData.Length);
                        networkManager.networkObjects[i].GetComponent<FirstPersonMovement>().enabled = true;
                        networkManager.networkObjects[i].GetComponent<Jump>().enabled = true;
                        networkManager.networkObjects[i].GetComponent<Crouch>().enabled = true;
                        networkManager.networkObjects[i].GetComponent<AimSystem>().enabled = true;
                        playersReady = 0;
                    }
                }
            }
        }


    }
    public int UpdateScore()
    {
        return score;
    }
}
