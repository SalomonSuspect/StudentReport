package com.example.studentreport

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.example.studentreport.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Example of a call to a native method
        // binding.sampleText.text = getGpa().toString()
        addStudent("Ryan")
        addStudent("Jenny")
        binding.sampleText.text = "Done with students"
    }

    /**
     * A native method that is implemented by the 'studentreport' native library,
     * which is packaged with this application.
     */
    external fun addStudent(student_name: String)

    companion object {
        // Used to load the 'studentreport' library on application startup.
        init {
            System.loadLibrary("studentreport")
        }
    }
}