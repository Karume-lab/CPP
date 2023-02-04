#include "main.hpp"

student_t *findLoop(student_t **head)
{
    student_t *slowPtr;
    student_t *fastPtr;

    if (head == NULL && (*head) == NULL)
        return (NULL);
    
    slowPtr = *head;
    fastPtr = *head;

    while (fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;

        if (slowPtr == fastPtr)
            return (fastPtr);
    }
    printf("No loop\n");
    return (NULL);
