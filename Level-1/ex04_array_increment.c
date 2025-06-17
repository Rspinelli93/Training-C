/* 
4. Array Increment
Description: Write a function that receives an array of integers and increments each by 1.

Input: Pointer to array, size.
 */

#include <stdio.h>

int SIZE = 5;
int increment(int array[], int slots);

int main (void) 
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("%i\n", arr[i]);
    }

    increment(arr, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%i\n", arr[i]);
    }
}

int increment(int array[], int slots)
{
    for (int i = 0; i < slots; i++)
    {
        array[i]++;
    }
    return 0;
}