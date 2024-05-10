#include <stdio.h>

// creating prototype
int findPrime(int, int); // Updated prototype

int main()
{
    int num, check_prime;
    printf("Enter a positive integer number: ");
    scanf("%d", &num);

    check_prime = findPrime(num, num / 2);

    if (check_prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

// Prototype description

int findPrime(int num, int i) // Updated function definition
{
    if (i == 1)
    {
        return 1;
    }
    else if (num % i == 0)
    {
        return 0;
    }
    else
    {
        return findPrime(num, i - 1); 
    }
}
