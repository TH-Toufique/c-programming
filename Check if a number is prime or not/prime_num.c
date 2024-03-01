#include<stdio.h>
int main()
{
    int i;
    int num;
    int count = 0;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    // 0 and 1 is not a prime number so we have to  check the input value
    if (num == 0 || num == 1)
    {
        count = 1;
        printf("%d is not a prime number",num);
    }
    for (i = 2 ; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = 1;
            printf("%d is not a prime number",num);
            break;
        }
        if (count == 0)
        {
            printf("%d is a prime number",num);
        }
        else
        {
            printf("%d is not a prime number",num);
        }
        return 0;
    }
    
}