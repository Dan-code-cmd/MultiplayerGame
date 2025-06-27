using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class HealthSystem : MonoBehaviour
{
    public float health = 100;
    public float maxHealth = 100;
    public HealthBar healthBar;     //variables
    public bool alive;
    public ScoreSystem scoreSystem;
    private void Awake()
    {
        this.alive = true;
        this.health = maxHealth;

    }

    // Update is called once per frame
    void Update()
    {
        healthBar.GetHealthBar(maxHealth, health);   // using health set the healthbar
        if (alive)   
        {

        }

        if (health == 0)   // when its health is 0 change it to not alive
        {
            this.alive = false;
            this.gameObject.transform.position = new Vector3(0.0f, 30.0f, 0.0f);  // when its not alive move it to the death box and disable movement and shooting
            this.GetComponent<FirstPersonMovement>().enabled = false;
            this.GetComponent<Jump>().enabled = false;
            this.GetComponent<Crouch>().enabled = false;
            this.GetComponent<AimSystem>().enabled = false;
        }

        if (!alive && health == 0) 
        {
            this.alive = false;
            this.gameObject.transform.position = new Vector3(0.0f, 30.0f, 0.0f);  // when its not alive move it to the death box and disable movement and shooting
            this.GetComponent<FirstPersonMovement>().enabled = false;
            this.GetComponent<Jump>().enabled = false;
            this.GetComponent<Crouch>().enabled = false;
            this.GetComponent<AimSystem>().enabled = false;
        }
        if (!alive && Input.GetKeyDown(KeyCode.Space))
        {
            this.alive = true;
            this.health = 100.0f;
            byte[] health = this.GetComponent<NetworkGameObject>().ToPacketHealth();
            NetworkManager.client.Send(health, health.Length);
            this.gameObject.transform.position = new Vector3(0.0f, 0.0f, 0.0f);  // when its not alive move it to the death box and disable movement and shooting
            this.GetComponent<FirstPersonMovement>().enabled = true;
            this.GetComponent<Jump>().enabled = true;
            this.GetComponent<Crouch>().enabled = true;
            this.GetComponent<AimSystem>().enabled = true;
        }

    }
}
