/*
26. Find Student by Name
Description: Implement a search function to find a student in the array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    char* name;
    int id;
} Student;

int main (void)
{
    char* studName = malloc(20 * sizeof(char));
    if(studName == NULL)
    {
        printf("Could not allocate memory\n");
        return 1;
    }
    printf("Search a student:");
    scanf("%s", studName);
    
    Student students[] = {{"Luis", 81681628}, {"Pedro", 75496328}, {"Agustin", 52629812},
                          {"Miguel", 13265987}, {"Juan", 2236992}, {"Maximo", 456328549}};

    for (int i = 0; i < 6; i++)
    {
        bool found = false;
        int counter = 0;

        while (students[i].name[counter] != '\0')
        {
            if (students[i].name[counter] == studName[counter])
            {
                found = true;
                counter++;
            }
            else
            {
                break;
            }
        }

        if(found)
        {
            printf("%s, ID: %i\n", students[i].name, students[i].id);
            break;
        }
    }

    free(studName);
    return 0;
}