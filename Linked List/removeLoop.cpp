#include "main.hpp"

int removeLoop(student_t **head)
{    
    student_t *slowPtr = (*head);
    student_t *fastPtr = findLoop(head);

    while (slowPtr->next != fastPtr->next)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }
    fastPtr->next = NULL;
    
    return (0);
}