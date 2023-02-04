#include "main.hpp"

student_t *reverseNodes(student_t **head)
{
    student_t *prev = NULL;
    student_t *next;

    if (head == NULL || *head == NULL)
        return (NULL); 
    if ((*head)->next == NULL)
        return (*head);
    
    while ((*head) != NULL)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = (*head);
        (*head) = next;
    }
    (*head) = prev;
    return (*head);    
}