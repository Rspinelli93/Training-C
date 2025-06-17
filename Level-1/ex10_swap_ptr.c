/* 
10. Swap Pointers
Description: Swap the addresses held by two pointers.

Input: int **a, int **b.
*/

#include <stdio.h>

void changeaddress(int **a, int **b);

void main (void)
{
    int a = 1, b = 2;

    int *ptra = &a, *ptrb = &b;

    int **ptrptra = &ptra, **ptrptrb = &ptrb;

    printf("Pointer a adress = %p\n", ptra);
    printf("Pointer b adress = %p\n", ptrb);

    changeaddress(ptrptra, ptrptrb);

    printf("Pointer a adress = %p\n", ptra);
    printf("Pointer b adress = %p\n", ptrb);
}

void changeaddress(int **a, int **b)
{
    int* temp = *a;
    *a = *b;
    *b = temp;
}