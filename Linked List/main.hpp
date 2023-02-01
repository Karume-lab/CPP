#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Student{
    string name;
    int age;
    float marks;
    struct Student *next;
}student_t;

student_t *newStudent(string name, int age, float marks);
int insertBeginning(student_t **head, string name, int age, float marks);
int insertEnd(student_t **head, string name, int age, float marks);
int printNode(student_t **head);