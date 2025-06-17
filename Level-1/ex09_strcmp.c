/* 
9. String Compare
Description: Implement your version of strcmp.
*/

#include <stdio.h>

int compare (char *ptr1, char *ptr2);

int main (void)
{
    char* word1 = "hola";
    char* word2 = "Hola";

    int result = compare(word1, word2);

    if(result != 0)
    {
        printf("Son diferentes\n");
        return 0;
    }
    printf("Son iguales\n");

    return 0;
}

int compare (char *ptr1, char *ptr2)
{
    int pos = 0;
    int counter = 0;
    while (ptr1[pos] != '\0')
    {
        pos++;
        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        if(ptr1[i] != ptr2[i])
        {
            return 1;
        }
    }
    return 0;
}