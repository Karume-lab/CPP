#include "main.hpp"

int insertBeginning(student_t **head, string name, int age, float marks)
{
    student_t *ptr = newNode(name, age, marks);

    ptr->next = *head;
    *head = ptr;
    return (0);
