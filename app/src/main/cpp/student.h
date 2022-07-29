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

typedef struct{
    Student roster[MAX_CLAS_SIZE];
    int clase_size;
}Classroom;

Student* find_student(Classroom * classroom, std::string student_name);

#endif // #ifndef STUDENTREPORT_STUDENT_H
