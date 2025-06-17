/*
24. Struct in Struct
Description: Create a Course struct with a list of enrolled students.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int math;
    int bio;
    int eng;
} Grades;

typedef struct{
    char name[20];
    int id;
    Grades grade;
} Student;

int main (void)
{
    Student student1;
    Grades grade1;

/*     student1.name = malloc(20 * sizeof(char));
    if (student1.name == NULL)
    {
        printf("Could not allocate memory");
        return 1;
    } */

    printf("Name of student: ");
    scanf("%s", student1.name);
    printf("Student ID: ");
    scanf("%d", &student1.id);
    printf("Math grade: ");
    scanf("%d", &grade1.math);
    printf("Biology grade: ");
    scanf("%d", &grade1.bio);
    printf("English grade: ");
    scanf("%d", &grade1.eng);

    student1.grade = grade1;

    printf("%s with ID '%d' grades:\n", student1.name, student1.id);
    printf("Math: %d\nBiology: %d\nEnglish: %d\n", student1.grade.math, student1.grade.bio, student1.grade.eng);

    //free(student1.name);
    return 0;
}