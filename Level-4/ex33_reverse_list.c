/*
33. Reverse List
Description: Reverse the linked list in-place.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

void printList (node *start);
void freeList (node *start);
node* reverseList (node *start);

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Expected ./reverse + number(of nodes)\n");
        return 1;
    }

    int size = atoi(argv[1]);

    //* POPULATE
    node *start = NULL;
    for (int i = 0; i < size; i++)
    {
        node *n = malloc(sizeof(node));
        n->value = i;
        n->next = start;
        start = n;
    }

    //* PRINT OG ORDER
    printList(start);

    //* REVERSE ORDER
    start = reverseList(start);

    //* PRINT NEW ORDER
    printList(start);

    //* FREE MEMORY
    freeList(start);

    return 0;
}

void printList (node *start)
{
    node* ptr = start;
    while(ptr != NULL)
    {
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }
    return;
}

void freeList (node *start)
{
    node* ptr = start;
    while(ptr != NULL)
    {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    return;
}

node* reverseList(node *start)
{
    // 'prev' will eventually point to the new head (starts as NULL)
    node *prev = NULL;

    // 'curr' starts at the head of the list and will traverse it
    node *curr = start;

    // 'next' will temporarily store the next node during iteration
    node *next = NULL;

    // Use a do-while loop to process each node until we reach the end
    do
    {
        // Store the next node before breaking the current link
        next = curr->next;

        // Reverse the current node's pointer to point to the previous node
        curr->next = prev;

        // Move 'prev' forward to the current node (this becomes the new previous)
        prev = curr;

        // Move 'curr' forward to the next node (stored earlier)
        curr = next;

        // Loop continues until 'next' is NULL, meaning 'curr' has reached the end
    } while (next != NULL);

    // When the loop ends, 'prev' points to the new head of the reversed list
    return prev;
}