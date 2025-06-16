/* 12. Zeroed Array
Description: Allocate and zero out an array like calloc.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    int* myArray = malloc(5 * sizeof(int));

    if (myArray == NULL)
    {
        fprintf(stderr, "Memory alloc failed");
        return 1;
    }

    for(int i = 0; i < 5; i++)
    {
        myArray[i] = 0;
        printf("%i\n", myArray[i]);
    }
    return 0;
}