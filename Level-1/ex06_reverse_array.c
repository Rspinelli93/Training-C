/* 
6. Reverse Array (In-place)
Description: Write a function to reverse an array using pointers.
*/

#include <stdio.h>

void reverse (int size, int *ptr1, int *ptr2);

int main (void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[6];

    for (int i = 0; i < 7; i++)
    {
        printf("%i\n", arr[i]);
    }

    reverse(7, ptr1, ptr2);

        for (int i = 0; i < 7; i++)
    {
        printf("%i\n", arr[i]);
    }

    return 0;
}

void reverse (int size, int *ptr1, int *ptr2)
{
    for (int i = 0; i < size ; i++)
    {
        if (*ptr1 >= *ptr2)
        {
            break;
        }

        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        //ptr without the star being inside an array 
        // lets you ++ or -- to move arround the structure
        ptr1++;
        ptr2--;
    }
}