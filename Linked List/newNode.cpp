#include "main.hpp"

student_t *newNode(string name, int age, float marks)
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