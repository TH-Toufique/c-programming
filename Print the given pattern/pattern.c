#include<stdio.h>
int main()
{
    int i;
    int row;
    int col;
    printf("Enter row number: ");
    scanf("%d",&row);
    for ( i = 1; i <= row; i++)
    {
        for (col = 1; col <= i; col++)
        {
            printf("%d ", i * col);
        }
        printf("\n");
    }
    return 0;
}