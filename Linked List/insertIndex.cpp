#include "main.hpp"

int insertIndex(student_t **head, int index, string name, int age, float marks)
{
    student_t *ptr = *head;
    int size = sizeNodes(&ptr);

    if (index > size || index < 0)
    {
        printf("Index out of range\n");
        return (1);
    }
    else if (index == 0)
    {
        insertBeginning(head, name, age, marks);
        return (0);
    }
    else
    {
        for (int i = 1; i < index-1; i++)
        {
            ptr = ptr->next;
        }

        student_t *newN = newNode(name, age, marks);
        newN->next = ptr->next;
        ptr->next = newN;
    }

    return (0);
}