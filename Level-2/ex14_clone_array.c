/*
14. Clone an Array
Description: Clone an integer array (deep copy). 
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Write the lenght of the array after the name of the program");
        return 1;
    }

    int length = atoi(argv[1]);
    int arrOG[length];
    int *ptr = &arrOG[0];
    int value = 0;

    for (int i = 0; i < length; i++)
    {
        value += 100;
        arrOG[i] = value;
    }

    int* arrCP = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        arrCP[i] = *ptr;
        ptr += 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("OG = %i\n", arrOG[i]);
        printf("CP = %i\n", arrCP[i]);
    }
    free(arrCP);
    return 0;
}