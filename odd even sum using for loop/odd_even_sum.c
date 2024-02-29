#include<stdio.h>
int main()
{
    int num;
    int i;
    int sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        for(i = 0; i <= num; i++)
        {
            sum = sum+i;
        }
        printf("The number is even and The sum is: %d",sum);
    }
    else
    {
        if (num % 2 != 0 )
        {
            for(i = 0; i <= num; i++)
            {
                sum = sum+i;
            }
            printf("The number is odd and The sum is: %d",sum);
        }
    }
    
}