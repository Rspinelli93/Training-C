/*
29. Push Back
Description: Insert a new node at the end.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

const int SIZE = 5;

int main (void)
{
    node *start = NULL;

    for (int i = 0; i < SIZE; i++)
    {
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            printf("Could not allocate node\n");
            return 1;
        }

        n->value = i;
        n->next = start;

        start = n;
    }

    node *ptr = start;

    while(ptr != NULL)
    {
        printf("%i\n", ptr->value);
        if(ptr->next == NULL)
        {
            node *newNode = malloc(sizeof(node));
            newNode->value = 100;
            newNode->next = NULL;

            ptr->next = newNode;
            break;
        }
        ptr = ptr->next;
    }

    if(ptr->next == NULL)
    {
        node *newNode = malloc(sizeof(node));
        newNode->value = 100;
        newNode->next = NULL;

        ptr->next = newNode;
    }

    ptr = start;

    while(ptr != NULL)
    {
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }

    return 0;
}