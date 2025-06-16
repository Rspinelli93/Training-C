/*
22. Sort Students by GPA
Description: Sort the array of students by GPA using pointer comparison.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char* name;
    float* GPA;
} Student;

void GPASort(Student *array, int size);

const int SIZE = 3;

int main (void)
{
    //* allocate struct array
    Student *students = malloc(SIZE * sizeof(Student));

    //* check if memory av
    if (students == NULL)
    {
        fprintf(stderr, "No memory abvailable\n");
        return 1;
    }

    //* populate
    for (int i = 0; i < SIZE; i++)
    {
        students[i].name = malloc(25 * sizeof(char));
        printf("Name of Student:");
        scanf("%s", students[i].name);

        students[i].GPA = malloc(sizeof(float));
        printf("GPA:");
        scanf("%f", students[i].GPA);
    }

    //* sort the struct
    GPASort(students, SIZE);

    //* print them in screen
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i. %s, GPA: %.1f\n", (i + 1), students[i].name, *students[i].GPA);
        free(students[i].name);
        free(students[i].GPA);
    }

    //* free array of sturct
    free(students);
    return 0;
}

void GPASort(Student *array, int size)
{
    if (size == 1)
    {
        return;
    }

    for(int i = 0; i < size - 1; i++)
    {
        if(*array[i].GPA < *array[i + 1].GPA)
        {
            Student temp = array[i];

            array[i] = array[i + 1];

            array[i + 1] = temp;

        }    
    }

    GPASort(array, size - 1);
}