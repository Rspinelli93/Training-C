/* 
5. Pointer to Pointer
Description: Write a function that modifies an integer using a pointer to pointer.

void modify(int **ptr);    
*/ 
    
#include <stdio.h>

void modify(int **ptr);

int main (void) 
{
    int a = 1;
    printf("a = %i\n", a);
    
    // EL POINTER DE UN INT (int *) ESPERA LA ADRESS DE UN INT
    int *ptra = &a;

    // EL POINTER DE UN POINTER (int **) ESPERA LA ADRESS DE UN POINTER
    int **ptrptra = &ptra; 

    modify(ptrptra);

    printf("a = %i\n", a);
    return 0;
}

void modify(int **ptr)
{
    **ptr = 5;
}