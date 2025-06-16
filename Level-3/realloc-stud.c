/*
25. Dynamic Student List
Description: Dynamically allocate and add students to a growing array.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* name;
    float GPA;    
} Student;

const int SIZE = 2;

int main (void)
{
    Student *students = malloc(SIZE * sizeof(Student));

    if (students == NULL)
    {
        printf("Err allocating memory");
        return 1;
    }

    for (int i = 0; i < SIZE; i++)
    {
        students[i].name = malloc(20 * sizeof(char));

        if (students[i].name == NULL)
        {
            printf("Err allocating memory");
            return 1;
        }
        printf("Student #%i name:", i + 1);
        scanf("%s", students[i].name);
        printf("Student GPA:");
        scanf("%f", &students[i].GPA);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Name: %s, GPA: %.1f\n", students[i].name, students[i].GPA);
    }

    int newSIZE = 4;
    Student *temp = realloc(students, newSIZE * sizeof(Student));

    if (temp == NULL)
    {
        printf("Err allocating memory");
    }
    else
    {
        students = temp;
        temp = NULL;


        for (int i = SIZE; i < newSIZE; i++)
        {
            students[i].name = malloc(20 * sizeof(char));

            if (students[i].name == NULL)
            {
                printf("Err allocating memory");
                return 1;
            }
            printf("Student #%i name:", i + 1);
            scanf("%s", students[i].name);
            printf("Student GPA:");
            scanf("%f", &students[i].GPA);
        }
        
        for (int i = 0; i < newSIZE; i++)
        {
            printf("Name: %s, GPA: %.1f\n", students[i].name, students[i].GPA);
            free(students[i].name);
        }
    }

    free(students);
    return 0;
}