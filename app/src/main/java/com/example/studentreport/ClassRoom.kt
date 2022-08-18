package com.example.studentreport
import android.util.Log

private const val TAG = "ClassRoom"

class ClassRoom {
    var rollCall = mutableListOf<Student>()
    fun addStudent(name: String){
        val newStudent = Student(name)
        rollCall.add(newStudent)
    }
    fun findStudent(studentName: String): Student? {
        for (student in rollCall){
            if(student.name == studentName){
                return student
            }
        }
        Log.e(TAG,"Could not find student $studentName")
        return null
    }

    fun updateStudentGrade(studentName: String, grade: Double) {
        findStudent(studentName)?.add_grade(grade)
    }
    fun getStudentReportCard(studentName: String): Double? {
        return findStudent(studentName)?.get_GPA()
    }
}