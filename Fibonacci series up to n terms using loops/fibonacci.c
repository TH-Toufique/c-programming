#include<stdio.h>
int main()
{
    int first_num = 0; 
    int second_num = 1;
    int term;
    int i,num;

    printf("Enter number of terms for fibonacci: ");
    scanf("%d", &num);

    printf("The fibonacci series is: \n%d\n%d\n",first_num, second_num);
    for ( i = 3; i <= num; i++)
    {
        term = first_num + second_num;
        printf("%d\n", term);
        first_num = second_num;
        second_num = term;
    }
    printf("\n");
    return 0;
}