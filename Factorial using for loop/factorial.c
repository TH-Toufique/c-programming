#include<stdio.h>
int main()
{
    int i;
    int num;
    int fact = 1;
    printf("Enter number range for calculating factorial: ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of %d is : %d", num,fact);
}