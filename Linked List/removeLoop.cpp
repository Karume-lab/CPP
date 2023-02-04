#include "main.hpp"

int removeLoop(student_t **head)
{    
    student_t *fastPtr = findLoop(head);
    student_t *slowPtr = (*head);

    if (fastPtr->next == *head)
    {
        fastPtr->next = NULL;
        return (0);
    }
    
    while (slowPtr->next != fastPtr->next)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }

    fastPtr->next = NULL;
    return (0);
}