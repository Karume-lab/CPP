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
    
    student_t *first = newNode("Karume",21 ,20);
    student_t *head = first;
    student_t *second = newNode("Dan",50 ,20);
    first->next = second;
    student_t *third = newNode("John",20 ,20);
    second->next = third;

    third->next = first;
    removeLoop(&head);
    printData(&head);
    // reverseNodes(&head);
    // cout<< "\n\nChange\n\n";
    // printData(&head);
    return (0);
}
