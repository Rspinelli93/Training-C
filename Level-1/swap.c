/* 
1. Swap
Description: Write a function that swaps two integers.

Input: Two int pointers.

Constraint: Use only pointers. 
*/

#include <stdio.h>

int swap(int *px, int *py);

int main (void){
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;

    printf("a = %i \nb = %i \n", a, b);

    swap(pa, pb);
 
/*  This works as well, and there is no need to declare the pointers in main
    swap(&a, &b);
 */
    printf("a = %i \nb = %i \n", a, b);
    return 0;
}

int swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
    return 0;
}