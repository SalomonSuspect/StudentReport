package com.example.studentreport
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.studentreport.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        var jenniesClass = ClassRoom()

        // Example of a call to a native method
        // binding.sampleText.text = getGpa().toString()
        jenniesClass.addStudent("Ryan")
        jenniesClass.addStudent("Jenny")
        jenniesClass.updateStudentGrade("Ryan", 4.0)
        binding.sampleText.text = jenniesClass.getStudentReportCard("Ryan").toString()



    }

    /**
     * A native method that is implemented by the 'studentreport' native library,
     * which is packaged with this application.
     */
    external fun addStudent(student_name: String)
    external fun getStudentGPA(student_name: String)

    companion object {
        // Used to load the 'studentreport' library on application startup.
        init {
            System.loadLibrary("studentreport")

        }
    }
}