#include "main.hpp"

int printData(student_t **head)
{
    student_t *ptr = *head;
    int count = 1;
    if (ptr != NULL)
    {
        while (ptr)
        {
            printf("\n");
            cout<< "Node Number: " << count << endl;
            cout << "Name: " << ptr->name << endl;
            cout << "Age: " << ptr->age << endl;
            cout << "Marks: " << ptr->marks << endl;

            count++;
            ptr = ptr->next;
        }   
    }
    else
        printf("The list is empty. \n");

    return (0);
