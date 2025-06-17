/*
16. Growing Array
Description: Given a dynamically allocated array, double its size and preserve the values.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("write 2 params");
        return 1;
    }

    int size = atoi(argv[1]);
    int* arrOG = malloc(size * sizeof(int));

    if (arrOG == NULL)
    {
        fprintf(stderr, "No memory allocated");
        return 3;
    }

    int* ptr = &arrOG[0];

    for (int i = 0; i < size; i++)
    {
        arrOG[i] = i + 1;
        printf("%i\n", arrOG[i]);
    }

    int* arrD = calloc((size * 2), sizeof(int));

    if (arrD == NULL)
    {
        fprintf(stderr, "No memory allocated");
        return 3;
    }

    int* copyPtr = &arrD[0];

    for (int i = 0; i < size; i++)
    {
        *copyPtr = *ptr;
        ptr++;
        copyPtr++;
    }

    for (int i = 0; i < size * 2; i++)
    {
        printf("%i\n", arrD[i]);
    }

    free(arrOG);
    free(arrD);
    return 0;
}

