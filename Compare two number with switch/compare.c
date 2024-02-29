#include<stdio.h>
int main()
{
    int num;
    int num2;
    printf("Enter first number: ");
    scanf("%d",&num);
    printf("Enter second number: ");
    scanf("%d",&num2);

    switch (num > num2)
    {
    case 1:
        printf("First number is the largest number");
        break;

    case 0:
        if (num == num2)
        {
            printf("Both numbers are equal");
        }
        else
        {
            printf("Second number is the largest number");
        }
    break;
    }
}