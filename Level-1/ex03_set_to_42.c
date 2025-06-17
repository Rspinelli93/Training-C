/* 
3. Change the Value
Description: Write a function that sets the value of an int pointer to 42.
 */
 
#include <stdio.h>

int changeValue(int *ptr);

int main(void)
{
    int a = 0;
    int *ptra = &a;
    changeValue(ptra);
    printf("a -> %i\n", a);
    return 0;
}

int changeValue(int *ptr)
{
    *ptr = 42;
    return 0;
}