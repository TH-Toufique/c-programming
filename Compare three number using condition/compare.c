#include<stdio.h>
int main()
{
    int num;
    int num2;
    int num3;
    printf("Enter first number:");
    scanf("%d",&num);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Enter third number:");
    scanf("%d",&num3);
    if (num > num2 && num > num3)
    {
        printf("First number is the biggest number");
    }
    else if (num2 > num && num2 > num3)
    {
        printf("Second number is the biggest number");
    }
    else
    {
        printf("Third number is the biggest number");
    }
    return 0;
}