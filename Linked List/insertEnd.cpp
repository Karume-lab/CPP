#include "main.hpp"

int insertEnd(student_t **head, string name, int age, float marks)
{
    student_t *newNode = newNode(name, age, marks);
    student_t *ptr = NULL;
    ptr = *head;

    if (ptr->next == NULL)
        insertBeginning(&ptr, name, age, marks);

    while (ptr->next)
        ptr = ptr->next;

    ptr->next = newNode;
    newNode->next = NULL;

    return (0);
