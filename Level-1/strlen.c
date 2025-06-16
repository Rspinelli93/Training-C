/*
7. String Length
Description: Write your own version of strlen.

Input: Pointer to char.

Constraint: No strlen.
*/

#include <stdio.h>

int stringl(char*);

int main (void)
{
    char* word = "Dog";

    printf("Word: %s\n", word);

    int length = stringl(word);

    printf("Length: %i\n", length);
}

int stringl(char* letter)
{
    int counter = 0;
    int position = 0;

    while (letter[position] != '\0')
    {   
        position++;
        counter++;
    }

    return counter;
}