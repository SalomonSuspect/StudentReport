#include <string>
#include <vector>
#define MAX_CLAS_SIZE 16
typedef struct{
    std::string Name;
    std::vector<float> grades;
} Student;

typedef struct{
    Student roster[MAX_CLAS_SIZE];
    int clase_size;
}Classroom;