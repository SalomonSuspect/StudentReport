#include "student.hpp"
#include <jni.h>

static Student student1 = {"Ryan", {3.2, 3.3}};

extern "C" JNIEXPORT jfloat JNICALL
Java_com_example_studentreport_MainActivity_getGpa(
    JNIEnv* env,
    jobject /* this */) {
  float running_sum = 0;
  if(student1.grades.size() == 0)
  {
    return 0;
  }
  for(int i=0; i< student1.grades.size(); i++)
  {
    running_sum += student1.grades[i];
  }
  return running_sum/student1.grades.size();
}