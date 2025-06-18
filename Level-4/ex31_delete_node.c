/*
31. Delete Node by Value
Description: Remove a node with a specific value.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

node* findVal(node *start, int val);
void printList(node *start);
void freeList(node *start);

const int SIZE = 5;

int main(void)
{
    node *start = NULL;

    // Create linked list: 4 -> 3 -> 2 -> 1 -> 0
    for (int i = 0; i < SIZE; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            printf("Could not allocate memory\n");
            freeList(start);
            return 1;
        }

        n->value = i;
        n->next = start;
        start = n;
    }

    int target = 2;
    int deleted = 0;

    // Case: deleting first node
    if (start != NULL && start->value == target)
    {
        node *temp = start;
        start = start->next;
        free(temp);
        deleted = 1;
    }
    else
    {
        node *answer = findVal(start, target);
        if (answer != NULL && answer->next != NULL)
        {
            node *temp = answer->next;
            answer->next = temp->next;
            free(temp);
            deleted = 1;
        }
    }

    if (deleted)
    {
        printf("The node with value %d was deleted.\n", target);
    }
    else
    {
        printf("Could not find the node with value %d.\n", target);
    }

    // Print the list after deletion
    printf("Remaining list:\n");
    printList(start);

    // Free all remaining memory
    freeList(start);

    return 0;
}

node* findVal(node *start, int val)
{
    node *ptr = start;
    while (ptr != NULL && ptr->next != NULL)
    {
        if (ptr->next->value == val)
        {
            return ptr;
        }
        ptr = ptr->next;
    }
    return NULL;
}

void printList(node *start)
{
    node *ptr = start;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}

void freeList(node *start)
{
    node *ptr = start;
    while (ptr != NULL)
    {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}