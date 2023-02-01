#include "main.hpp"


int main(void)
{
    student_t *head = NULL;

    insertBeginning(&head, "Peter", 50, 70.50);
    insertBeginning(&head, "John", 25, 60.00);
    insertBeginning(&head, "Dan", 15, 75.00);
    insertBeginning(&head, "Tyrone", 24, 100);
    insertBeginning(&head, "Karume", 20, 80.00);
    insertEnd(&head, "Mary", 25, 70);

    printNode(&head);
    return (0);
}
