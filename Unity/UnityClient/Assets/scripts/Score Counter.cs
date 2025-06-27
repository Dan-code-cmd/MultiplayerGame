using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ScoreCounter : MonoBehaviour
{

    public TextMeshProUGUI scoreText;
    public HealthSystem healthSystem;
    public ScoreSystem scoreSystem;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        scoreText.text = "Score: " + scoreSystem.score;  // using the score update the UI
    }
}
