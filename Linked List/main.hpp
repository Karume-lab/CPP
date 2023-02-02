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
int insertSpecific(student_t **head, int index, string name, int age, float marks);
int printStudent(student_t **head);
int sizeStudent(student_t **head);