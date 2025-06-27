using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UIElements;
public class DeathControl : MonoBehaviour
{
    // Start is called before the first frame update
    public TextMeshProUGUI deadText;
    public HealthSystem healthSystem;

    void Awake()
    {
        deadText.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (this.healthSystem.alive)
        {
            deadText.gameObject.SetActive(false);
        }
        else 
        {
            deadText.gameObject.SetActive(true);
        }
    }
}
