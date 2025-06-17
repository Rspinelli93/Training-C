/*
18. Split on Space
Description: Write a function that splits a string into words (like strtok, but don’t use it).
*/

#include <stdio.h>
#include <stdlib.h>

int count(char* text);
char** split(char* text);

int main(void)
{
    char* input = "Hello World";
    int wordcount = count(input);
    char** wordsArr = split(input);

    for (int i = 0; i < wordcount; i++)
    {
        printf("%s\n", wordsArr[i]);
        free(wordsArr[i]); // Free each word
    }
    free(wordsArr); // Free the array of pointers
    return 0;
}

// Counts the number of words separated by spaces
int count(char* text)
{
    int counter = 0;
    int inWord = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ' && inWord == 0)
        {
            counter++;
            inWord = 1;
        }
        else if (text[i] == ' ')
        {
            inWord = 0;
        }
    }
    return counter;
}

// Splits the string into words and returns a dynamically allocated array of strings
char** split(char* text)
{
    int wordcount = count(text);
    char** wordsArr = malloc(wordcount * sizeof(char*));

    int i = 0; // Index for iterating text
    int wordIdx = 0; // Index in wordsArr

    while (text[i] != '\0' && wordIdx < wordcount)
    {
        // Skip leading spaces
        while (text[i] == ' ') i++;

        // Find the length of the current word
        int start = i;
        while (text[i] != ' ' && text[i] != '\0') i++;
        int wordLength = i - start;

        // Allocate space for the word (+1 for null-terminator)
        wordsArr[wordIdx] = malloc((wordLength + 1) * sizeof(char));

        // Copy characters of the word
        for (int j = 0; j < wordLength; j++)
        {
            wordsArr[wordIdx][j] = text[start + j];
        }

        // Null-terminate the word
        wordsArr[wordIdx][wordLength] = '\0';

        wordIdx++;
    }

    return wordsArr;
}
