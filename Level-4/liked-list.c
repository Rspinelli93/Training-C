/*
27. Singly Linked List (Basic)
Description: Define a Node struct and build a simple singly linked list.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    // Data field of the node
    int number;

    // Pointer to the next node
    struct Node* next;
} Node;

const int SIZE = 3;

int main (void)
{
    // Create a temporary pointer to a Node
    Node *temp = NULL;

    for (int i = 0; i < SIZE; i++)
    {
        // Allocate a Node in memory, store it in a pointer n
        Node *n = malloc(sizeof(Node));
        
        // Check if memory abvailable
        if (n == NULL)
        {
            return 1;
        }

        // Use arrow operator (Say to n to go where is pointing (in this case a struct) 
        // and then go to number or next to operate.) [ n->number is the same as (*n).number]
        n->number = i;

        // Update the new node n's next value to be = temp (remember those are adresses)
        n->next = temp;

        // And then change temp to point at the just created Node "n"
        temp = n;
    }

    //* Printing those numbers with a pointer ptr

    // Initialize ptr to the begining of the list
    Node *ptr = temp;

    // While this is not null (because the last pointer of "next" of the list is NULL)
    while (ptr != NULL)
    {
        // Print that number
        printf("%i\n", ptr->number);

        // Set pointer to whatever is inside of next in the struct ptr is pointing at
        ptr = ptr->next;
    }
    return 0;
}