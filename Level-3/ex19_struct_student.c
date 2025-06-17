/*
19. Define a Student
Description: Create a struct Student with name, ID, and GPA. Write a function to print it.
*/

#include <stdio.h>

struct Student {
    char* name;
    int id;
    float GPA;
};

int main (void)
{
    struct Student student;

    student.name = "Jose Perez";
    student.id = 123456;
    student.GPA = 5.2;


    printf("Name: %s\nID: %i\nGPA: %f\n", student.name, student.id, student.GPA);
    return 0;
}