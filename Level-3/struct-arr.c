/*
21. Array of Structs
Description: Allocate an array of Student structs and populate it.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char* name;
    int id;
};

const int SIZE = 3;

int main (void)
{
    struct Student* students = malloc(SIZE * sizeof(struct Student));

    if(students == NULL)
    {
        fprintf(stderr, "No memory allocated");
        return 1;
    }

    for (int i = 0; i < SIZE; i++)
    {
        students[i].name = malloc(25 * sizeof(char));
        printf("Name of student:");
        scanf("%s", students[i].name);
        printf("ID of student:");
        scanf("%i", &students[i].id);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Name of student:%s\n", students[i].name);
        printf("ID of student:%i\n", students[i].id);
    }

    for (int i = 0; i < SIZE; i++)
    {
        free(students[i].name);
    }
    free(students);
    return 0;
}