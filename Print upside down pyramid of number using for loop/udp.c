#include<stdio.h>
int main()
{
    int i;
    int row;
    int col;
    printf("Enter number of rows you want to print: ");
    scanf("%d",&row);
    for (i = 1; i <= row; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}