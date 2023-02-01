#include "main.hpp"

student_t *newStudent(string name, int age, float marks)
{
    student_t *ptr = (student_t*)malloc(sizeof(student_t));
    if (ptr == NULL)
        return (NULL);
    
    ptr->name = name;
    ptr->age = age;
    ptr->marks = marks;
    ptr->next = NULL;

    return (ptr);
}

int insertBeginning(student_t **head, string name, int age, float marks)
{
    student_t *ptr = newStudent(name, age, marks);

    ptr->next = *head;
    *head = ptr;
    return (0);
}

int insertEnd(student_t **head, string name, int age, float marks)
{
    student_t *newNode = newStudent(name, age, marks);
    student_t *ptr = NULL;
    ptr = *head;

    if (ptr->next == NULL)
        insertBeginning(&ptr, name, age, marks);

    while (ptr->next)
        ptr = ptr->next;

    ptr->next = newNode;
    newNode->next = NULL;

    return (0);
}



int printNode(student_t **head)
{
    student_t *ptr = *head;
    int count = 1;
    if (ptr != NULL)
    {
        while (ptr)
        {
            printf("\n");
            cout<< "Node Number: " << count << endl;
            cout << "Name: " << ptr->name << endl;
            cout << "Age: " << ptr->age << endl;
            cout << "Marks: " << ptr->marks << endl;

            count++;
            ptr = ptr->next;
        }   
    }
    else
        printf("The list is empty. ");

    return (0);
}