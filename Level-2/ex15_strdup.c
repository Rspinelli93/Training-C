/*
15. String Duplication
Description: Re-implement strdup.
*/

#include <stdio.h>
#include <stdlib.h>

char* stringdup (char* word);

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("This should have 2 words\n");
        return 1;
    }

    char* input = argv[1];
    char* duplicate = stringdup(input);

    printf("%s\n", duplicate);

    free(duplicate);
    return 0;
}

char* stringdup (char* word)
{
    int counter = 0;

    while (word[counter] != '\0')
    {
        counter++;
    }
    counter++;
    char* duplicate = malloc((counter) * sizeof(char));

    for (int i = 0; i < counter; i++)
    {
        duplicate[i] = word[i];
    }

    return duplicate;
}