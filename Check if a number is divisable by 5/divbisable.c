#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num % 5 == 0)
    {
        printf("The number is divisable by 5");
    }
    else
    {
        printf("The number is not divisable by 5");
    }
    return 0;
}