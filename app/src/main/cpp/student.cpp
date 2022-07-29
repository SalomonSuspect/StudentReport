#include "student.h"


float Student::getGPA() {
    auto cum_gpa = 0.0;
    for(const float grade :grades)
    {
        cum_gpa += grade;
    }
    return cum_gpa/grades.size();
}

Student* find_student(Classroom * classroom, std::string student_name){
    for(int i=0; i<MAX_CLAS_SIZE; i++){
        if(classroom->roster[i].Name == student_name) {
            return &classroom->roster[i];
        }
    }
    return NULL;
}
