#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    //comparing between two number
    if (num1 > num2)
    {
        printf("First number is grater than second number"); //if the condition is true
    }
    else
    {
        printf("Second number is grater than first number"); //if the condition is false
    }
    return 0;
}