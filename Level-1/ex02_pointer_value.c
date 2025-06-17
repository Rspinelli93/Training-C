/* 
2. Pointer Value
Description: Write a program that prints the value and the address of an integer using a pointer.

Hint: Use & and *. 
*/

#include <stdio.h>

void main (void)
{
    int a = 2, *ptr = &a;

    printf("Value: %i\nAdress: %p\n", *ptr , ptr);
}