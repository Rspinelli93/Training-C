/* 
8. String Copy
Description: Recreate strcpy using pointer arithmetic.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* wordcpy(char* word, char* *point);

void main (void)
{
    char* word = "Hola";
    char* *ptr = &word;

    char* copy = wordcpy(word, ptr);

    printf("Orig: %s\nCopy: %s\n", word, copy);

    //* printf("%s", *ptr); == Hola
    free(copy);
}

char* wordcpy(char* word, char* *point)
{
    char* copy = malloc(strlen(word) + 1);

    int pos = 0;

    while (word[pos] != '\0') 
    {
        copy[pos] = word[pos];
        pos++;
    }

    copy[pos] = '\0';

    return copy;
}