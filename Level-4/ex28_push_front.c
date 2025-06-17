/*
28. Push Front
Description: Insert a new node at the beginning.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

int main (void)
{
    node *start = NULL;

    for (int i = 0; i < 4; i++)
    {
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return 1;
        }

        n -> value = i;
        n -> next = start;
        
        start = n;
    }

    node *ptr = start;

    while(ptr != NULL)
    {
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }

    node *newNode = malloc(sizeof(node));
    newNode -> value = 100;
    newNode -> next = start;
    start = newNode;

    ptr = start;

    while(ptr != NULL)
    {
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }

    return 0;
}