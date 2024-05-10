#include<stdio.h>

void swapping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num_1, num_2;
    printf("Enter first number: ");
    scanf("%d", &num_1);
    printf("Enter second number: ");
    scanf("%d", &num_2);

    printf("Number before swapping \n a = %d \n b = %d \n", num_1, num_2);
    swapping(&num_1, &num_2);
    printf("Number after swapping \n a = %d \n b = %d\n", num_1, num_2);
    return 0;
}