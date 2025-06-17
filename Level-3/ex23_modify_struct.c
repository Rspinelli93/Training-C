/*
23. Pass Struct by Pointer
Description: Modify a student using a pointer to the struct.
*/

#include <stdio.h>

typedef struct
{
    char* name;
    long id;
    int age;
} Student;

int main (void)
{
    Student student1 = {"Rick", 46271455, 31};

    Student *ptrRick = &student1;

    ptrRick->age = 59;
    ptrRick->id = 16325993;
    ptrRick->name = "Robert";

    printf("%s, ID: %li, Age: %i\n", student1.name, student1.id, student1.age);
    return 0;
}