package com.example.studentreport

class Student(var name:String){
    var grades = mutableListOf<Double>()

    fun add_grade(grade:Double){
        grades.add(grade)
    }
    fun get_GPA(): Double{
        if(grades.size > 0) {
            return grades.average()
        }
        else{
            return 0.0
        }
    }
}