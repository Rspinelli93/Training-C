/*
30. Print List
Description: Traverse and print all nodes.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

const int SIZE = 4;

int main (void)
{
    node *start = NULL;

    for (int i = 0; i < SIZE; i++)
    {
        node *n = malloc(sizeof(node));

        if(n == NULL)
        {
            printf("No memory allocated\n");
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
        ptr = ptr->next;
    }
    return 0;
}