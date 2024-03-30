#include<stdio.h>
int main()
{
    int array[10]; // Declaring the array and adding the holding capacity which can be changed to n number
    int num; // Declare num as variable for holding how many element will be there in the array
    int *ptr; // Declaring pointer
    int i; // Declaring i for loop
    int search; // Using search variable for searching the element in the array
    int flag = 0; // Using flag for checking condition
    ptr = &array; // Assinging the memory addr of the array to pointer

    // Taking input for how many element will be used here max value is 10
    printf("Enter number of element want to input in the array: \n");
    scanf("%d",&num);
    printf("Enter the elements: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d",&array[i]); // Taking input of each elements
    }
    printf("Enter the number you want to search: \n");
    scanf("%d", &search); // Taking input of element that want to search
    
    for( i = 0; i < search; i++) // loop
    {
        if (*ptr == search) // if search is equal to pointer address then the condition is true
        {
            flag = 1; // Changing the flag which will tell the program that value has been changed
            break; // Stop searching if the value is found
        }
        ptr++; // incrementing the value searching
    }

    // Using condition to display if the value is exist or not
    if (flag == 1)
    {
        printf("Element is found in the array");
    }
    else
    {
        printf("Element is not found in the array");
    }
    return 0;
}