#include<stdio.h>
int main()
{
    int num;
    int i;
    int sum = 0;
    printf("Enter number range for performing addition: ");
    scanf("%d",&num);
    for ( i = 0; i <= num; i++)
    {
        sum = sum+i;
    }
    printf("The result is: %d",sum);
    return 0;
}