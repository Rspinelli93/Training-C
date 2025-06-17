/*
20. Compare Students
Description: Compare two students and return the one with the higher GPA.
*/

#include <stdio.h>

struct student 
{
    char* name;
    float GPA;
};

int main (void)
{
    struct student s1, s2;

    s1.name = "Pedro";
    s1.GPA = 5.5;

    s2.name = "Jose";
    s2.GPA = 5.7;

    if(s1.GPA == s2.GPA)
    {
        printf("They have the same GPA: %f\n", s1.GPA);
        return 1;
    }
    if(s1.GPA < s2.GPA)
    {
        printf("%s has a higher GPA: %f\n", s2.name, s2.GPA);
    }
    if(s1.GPA > s2.GPA)
    {
        printf("%s has a higher GPA: %f\n", s1.name, s1.GPA);
    }
    return 0;
}

