/* 13. Free It Right
Description: Write a program that allocates memory for strings, then correctly frees them.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("You must add a word");
        return 1;
    }

    char* prompt = argv[1];
    int size = (strlen(prompt) + 1);
    char* word = malloc(size * sizeof(char));

    if (word == NULL)
    {
        fprintf(stderr, "No memory allocated");
        return 2;
    }
    for (int i = 0; i < size; i++)
    {
        word[i] = prompt[i];
    }
    printf("%s\n", word);
    free(word);
    return 0;
}