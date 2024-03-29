#include<stdio.h>
int main()
{
    int array[10]; //defining the max length of the array it can be higher 
    int num; // For storing value of the array elements
    int *ptr; // Initializing a pointer as integer.

    // Taking the number of element for input
    printf("Enter the number of the element you want to input: \n");
    scanf("%d", &num);
    printf("Enter the elements: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); // For taking each element as input in array
    }
    ptr = &array; // Assinging arrays memory address to pointer
    printf("Printing each element using pointer: \n");
    for (int i = 0; i < num; i++) 
    {
        printf("%d\n", ptr[i]); // Printing each element that stored in array using pointer
    }
    return 0;
}