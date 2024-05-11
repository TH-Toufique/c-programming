#include <stdio.h>

int manual_compare(char *ptr_1, char *ptr_2)
{
    int n = 0;
    while (ptr_1[n] != '\0') // \0 is null pointer
    {
        if (ptr_1[n] == ptr_2[n]) //if equal then strings are same 
        {
            n++;
        }
        if (ptr_1[n] > ptr_2[n]) // compare using ascii values if condition met then return 1. means not same
        {
            return 1;
        }
        if (ptr_1[n] < ptr_2[n])
        {
            return -1;
        }
        return 0; // if both of the string are same.
    }
}

int main()
{
    int diff;
    char text_1[10], text_2[10];

    // Taking string as input
    printf("Enter first word: ");
    scanf("%s", text_1);
    printf("Enter second word: ");
    scanf("%s", text_2);

    diff = manual_compare(text_1, text_2); // calling the function
    printf("diff = %d\n", diff);
    return 0;
}