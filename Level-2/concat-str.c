/*
17. Concatenate Strings
Description: Concatenate two strings into a new one (allocate enough space).
*/

#include <stdio.h>
#include <stdlib.h>

char* concate(char* string1, char* string2);

int main (int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Write 2 words after bla bla\n");
        return 1;
    }

    char* word1 = argv[1];
    char* word2 = argv[2];

    char* word3 = concate(word1, word2);

    printf("%s\n", word3);

    free(word3);
    return 0;
}

char* concate(char* string1, char* string2)
{
    int length1 = 0;
    int length2 = 0;
    int position = 0;

    while (string1[position] != '\0')
    {
        length1++;
        position++;
    }

    position = 0;

    while (string2[position] != '\0')
    {
        length2++;
        position++;
    }

    char* result = malloc((length1 + length2 + 1) * sizeof(char));

    for (int i = 0; i < length1; i++)
    {
        result[i] = string1[i];
    }

    for (int i = 0; i < length2; i++)
    {
        result[i + length1] = string2[i];
    }

    return result;
}