#include "main.hpp"

int sizeNodes(student_t **head)
{
    student_t *ptr = *head;
    int count = 0;
    if (ptr != NULL)
    {
        while (ptr)
        {
            count++;
            ptr = ptr->next;
        }   
    }
    else
        count = 0;

    return (count);
}