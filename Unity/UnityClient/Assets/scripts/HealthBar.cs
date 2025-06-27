using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
public class HealthBar : MonoBehaviour
{
    public Image image;
    public Camera camera;
    public GameObject player;
    public float target = 1;   // variables
    public float drainTime = 0.25f;
    public Gradient healthGradient;

    // Start is called before the first frame update
    void Awake()
    {
        player = GameObject.Find("First Person Controller");
        camera = player.GetComponentInChildren<Camera>();
        HealthBarGradientCheck();
    }
    private void Update()
    {
       Quaternion rot = Quaternion.LookRotation(transform.position - player.transform.position, Vector3.up);  // set the health bar of enemies to always face the camera
        rot.eulerAngles = new Vector3(0, rot.eulerAngles.y, 0);
       transform.rotation = rot;
        //Debug.Log(image.transform.rotation.ToString());
       // Debug.Log(camera.transform.position.ToString());
    }
    // Update is called once per frame
    public void GetHealthBar(float max, float current)
    {
        target = current / max;
        StartCoroutine(DrainHealthBar());
        HealthBarGradientCheck();
    }
    public IEnumerator DrainHealthBar()
    {
        float fillAmount = image.fillAmount;
        float time = 0f;
        while (time < drainTime)
        {
            time += Time.deltaTime;
            image.fillAmount = Mathf.Lerp(fillAmount, target, (time / drainTime));  // using the fill amount and target calculate the visual for the health bar
            yield return null;
        }
    }
    public void HealthBarGradientCheck()
    {
        image.color = healthGradient.Evaluate(target);
    }
}
