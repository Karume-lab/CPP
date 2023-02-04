#include "main.hpp"

int deleteFirst(student_t **head)
{
    student_t *ptr = *head;
    if (ptr == NULL)
    {
        printf("There is no node to delete!\n");
        return (0);
    }
    
    *head = ptr->next;

    free(ptr);
    return (0);
