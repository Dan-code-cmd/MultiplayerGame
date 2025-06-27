using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class AimSystem : MonoBehaviour
{
    public Camera cam;
    public Transform lasterOrigin;
    public float gunRange = 50.0f;
    public float laserDuration = 0.2f;           // variables
    public float fireRate = 0.2f;
    public float fireTimer;
    public LineRenderer lineRenderer;
    public HealthSystem healthSystem;
    public ScoreSystem scoreSystem;
    private void Start()
    {
        cam = GetComponentInChildren<Camera>(); // getting the camera in the seen
    }
    // Update is called once per frame
    void Update()
    {
        fireTimer += Time.deltaTime;

        AimZoom();

        if (Input.GetButtonDown("Fire1") && fireTimer > fireRate) // if the player clicks the first mouse button and the conditions are met
        {
            fireTimer = 0;   // reset fire timer
            Debug.Log("running shoot function");
            lineRenderer.SetPosition(0, lasterOrigin.position);   // render a line using the fire point of the laser
            Vector3 rayOrigin = lasterOrigin.position;
            RaycastHit hit;

            if (Physics.Raycast(rayOrigin, cam.transform.forward, out hit, gunRange))   // shoot a raycast using the origin of the laser and the camera foward vector with the range of the gun
            {
                lineRenderer.SetPosition(1, hit.point);
                HealthSystem enemyHealth = hit.transform.gameObject.GetComponent<HealthSystem>();  // get the health system of the hit enemy lower the health and send that data as a packet
                enemyHealth.health -= 10;
                byte[] hitData = hit.transform.GetComponent<NetworkGameObject>().ToPacketHealth();
                NetworkManager.client.Send(hitData, hitData.Length);
                Debug.Log("Sending Hit Packet for ID:" + hit.transform.GetComponent<NetworkGameObject>().networkID);
                if (enemyHealth.health == 0) // when the health is 0 add 100 to the players score
                {
                    Debug.Log("enemy killed");
                    scoreSystem.score += 100;
                }
                //Destroy(hit.transform.gameObject);D
            }
            else
            {
                lineRenderer.SetPosition(1, rayOrigin + (cam.transform.forward * gunRange)); // if the ray cast doesnt hit anything set the line to the gun range
            }

            StartCoroutine(Shootlaser());
            //Shoot();
        }
      
    }
    public void AimZoom() 
    {
        if (Input.GetMouseButton(1)) // if rightmousebutton is clicked zoom in then when released zoom out 
        {

            //Debug.Log("aiming in");
            cam.fieldOfView = 30;
        }
        else
        {
           // Debug.Log("normal view");
            cam.fieldOfView = 60;
        }
    }
    public void Shoot() 
    {
        
    }
    IEnumerator Shootlaser()  // enable the visual for the laser
    {
        Debug.Log("shooting laser");
        lineRenderer.enabled = true;
        yield return new WaitForSeconds(0.05f); 
        lineRenderer.enabled = false;
    }
}
