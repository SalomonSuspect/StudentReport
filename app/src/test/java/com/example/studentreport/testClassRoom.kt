package com.example.studentreport
import com.example.studentreport.ClassRoom
import org.junit.Test
import org.junit.Assert.*

class testClassRoom {
    @Test
    fun testNoGrades() {
        var noGradeClass = ClassRoom()
        noGradeClass.addStudent("Ryan")
        assertEquals(noGradeClass.getStudentReportCard("Ryan"), 0.0)
    }

}