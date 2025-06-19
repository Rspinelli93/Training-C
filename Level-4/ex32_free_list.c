/*
32. Free List
Description: Correctly free all nodes.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Use ./free + number(of nodes)");
        return 1;
    }

    int size = atoi(argv[1]);

    node *start = NULL;

    for (int i = 0; i < size; i++)
    {
        node *n = malloc(sizeof(node));
        n->value = i;
        n->next = start;
        start = n;
    }

    //* FREEING ALL NODES
    // Init a ptr at the begging of the linked list
    node *ptr = start;
    while (ptr != NULL)
    {
        // Init a temp ptr to the same address
        node *temp = ptr;

        // Now change ptr to actually point to the next one
        ptr = ptr->next;
        printf("%i\n", temp->value);

        // Free the node the temp ptr is pointing to
        free(temp);
    }
    return 0;
}