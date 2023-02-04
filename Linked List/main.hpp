#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Student{
    string name;
    int age;
    float marks;
    struct Student *next;
}student_t;

student_t *newNode(string name, int age, float marks);
int insertBeginning(student_t **head, string name, int age, float marks);
int insertEnd(student_t **head, string name, int age, float marks);
int insertIndex(student_t **head, int index, string name, int age, float marks);
int printData(student_t **head);
int sizeNodes(student_t **head);
int deleteFirst(student_t **head);
student_t *reverseNodes(student_t **head);
student_t *findLoop(student_t **head);
int removeLoop(student_t **head);
