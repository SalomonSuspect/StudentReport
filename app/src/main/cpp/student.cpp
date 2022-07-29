#include "student.hpp"
#include <jni.h>


static Classroom classroom;

//extern "C" JNIEXPORT jfloat JNICALL
//Java_com_example_studentreport_MainActivity_getGpa(
//        JNIEnv* env,
//        jobject pThis,
//        jstring student_name) {
//  float running_sum = 0;
//  if(student1.grades.size() == 0)
//  {
//    return 0;
//  }
//  for(int i=0; i< student1.grades.size(); i++)
//  {
//    running_sum += student1.grades[i];
//  }
//  return running_sum/student1.grades.size();
//}
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

Student findStudent(std::string student_name){

}