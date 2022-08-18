#include "student.h"
#include <iostream>
using namespace std;

float Student::getGPA() {
    auto cum_gpa = 0.0;
    for(const float grade :grades)
    {
        cum_gpa += grade;
    }
    return cum_gpa/grades.size();
}
void addStudent(Classroom * classroom, std::string student_name)
{
    classroom->roster[classroom->class_size] = Student();
    classroom->class_size++;
}

Student* find_student(Classroom * classroom, std::string student_name){
    for(int i=0; i<MAX_CLAS_SIZE; i++){
        if(classroom->roster[i].Name == student_name) {
            return &classroom->roster[i];
        }
    }
    return NULL;
}

int main()
{
    Classroom classroom = Classroom();
    addStudent(&classroom, "Ryan");

    cout<<classroom.class_size<<endl;
    return 0;
}