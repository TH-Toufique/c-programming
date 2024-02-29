#include<stdio.h>
int main()
{
    int i;
    int row;
    int col;
    printf("Enter how many row you want: ");
    scanf("%d",&row);
    for (i = 1; i <= row; i++)
    {
        for ( col = 1; col <= i; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}