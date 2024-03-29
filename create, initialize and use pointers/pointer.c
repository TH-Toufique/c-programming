#include<stdio.h>
int main()
{
    int num = 10; // Assinging value to num;
    int *ptr; // Initializing pointer
    ptr = &num; // Assinging num memory addr to ptr
    printf("Value: %d\n", *ptr); // Printing the current value
    *ptr = 20; // Assinging another value to the pointer
    printf("Updated value: %d", num); // Printing the updated value
    return 0;
}