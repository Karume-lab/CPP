#include "main.hpp"


    student_t *head = NULL;
int main(void)
{

    insertBeginning(&head, "3.Peter", 50, 70.50);
    insertBeginning(&head, "2.John", 25, 60.00);
    // insertBeginning(&head, "1.Dan", 15, 75.00);
    // insertBeginning(&head, "3.Tyrone", 24, 100);
    // insertBeginning(&head, "2.Karume", 20, 80.00);
    // insertEnd(&head, "1.Mary", 25, 70);
    // insertSpecific(&head, 0, "6.New", 30, 40);
    
    printStudent(&head);
    reverseStudent(&head);
    cout<< "\n\nChange\n\n";
    printStudent(&head);
    return (0);
}
