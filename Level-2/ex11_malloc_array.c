/* 
11. Malloc an Array
Description: Write a function that allocates an array of n integers. 
*/

#include <stdio.h>
#include <stdlib.h>

int* allocate (int size);

int main (void)
{
    int* arrptr = allocate(5);
    if (arrptr == NULL)
    {
        // stderr => standrad error
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        arrptr[i] = i;
        printf("Pos %i value: %i\n", i, arrptr[i]);
    }
    free(arrptr);
    return 0;
}

int* allocate (int size)
{
    //* Malloc returns a pointer to the start of the allocated memory.
    int* arrptr = malloc(size * sizeof(int));
    return arrptr;
}