#include <string>
#include <vector>
#define MAX_CLAS_SIZE 16

#ifndef STUDENTREPORT_STUDENT_H
#define STUDENTREPORT_STUDENT_H
class Student{
public:
    std::string Name;
    std::vector<float> grades;
    float getGPA();
};

void addStudent(std::string student_name);

typedef struct{
    Student roster[MAX_CLAS_SIZE];
    int class_size=0;
}Classroom;

Student* find_student(Classroom * classroom, std::string student_name);

#endif // #ifndef STUDENTREPORT_STUDENT_H
