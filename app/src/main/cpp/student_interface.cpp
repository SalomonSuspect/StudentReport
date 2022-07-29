//
// Created by rbonavida on 7/29/22.
// Collection of interfaces to access from kt.
//
#include <jni.h>
#include "student.h"

static Classroom classroom;

extern "C" JNIEXPORT void JNICALL
Java_com_example_studentreport_MainActivity_addStudent(
        JNIEnv* env,
jobject pThis,
        jstring student_name){
    Student* new_student = classroom.roster;
    const char *UTF_student_name = env->GetStringUTFChars(student_name, NULL);
    std::string str(UTF_student_name);
    new_student->Name = UTF_student_name;
}

extern "C" JNIEXPORT jfloat JNICALL
Java_com_example_studentreport_MainActivity_getStudentGPA(
        JNIEnv* env,
        jobject pThis,
        jstring student_name){
    const char *UTF_student_name = env->GetStringUTFChars(student_name, NULL);
    Student * student = find_student(&classroom, UTF_student_name);
    float gpa = student->getGPA();
    return gpa;

}

