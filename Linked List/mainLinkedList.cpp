#include "main.hpp"


int main(void)
{

    // insertBeginning(&head, "3.Peter", 50, 70.50);
    // insertBeginning(&head, "2.John", 25, 60.00);
    // insertBeginning(&head, "1.Dan", 15, 75.00);
    // insertBeginning(&head, "3.Tyrone", 24, 100);
    // insertBeginning(&head, "2.Karume", 20, 80.00);
    // insertEnd(&head, "1.Mary", 25, 70);
    // insertSpecific(&head, 0, "6.New", 30, 40);
    
    student_t *first = newNode("Karume",1 ,20);
    student_t *head = first;
    student_t *second = newNode("Dan",2 ,20);
    first->next = second;
    student_t *third = newNode("John",3 ,20);
    second->next = third;
    student_t *fourth = newNode("Dave", 4, 57);
    third->next = fourth;

    fourth->next = second;

    // findLoop(&head);
    removeLoop(&head);
    printData(&head);
    // reverseNodes(&head);
    // cout<< "\n\nChange\n\n";
    // printData(&head);
    return (0);
}
