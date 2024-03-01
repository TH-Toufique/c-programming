#include<stdio.h>
int main()
{
    int num;
    int first_digit;
    int last_digit;
    int sum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    //Getting the last digit by moduling the number by 10
    last_digit = num % 10;
    //Getting first digit by diving the number again and again by 10 till 10
    while (num >= 10)
    {
        num /= 10;
    }
    first_digit = num;
    sum = first_digit + last_digit;
    printf("The sum of first and last digit is: %d",sum);
    return 0;
}