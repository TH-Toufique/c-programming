#include<stdio.h>
int main()
{
    int side_1;
    int side_2;
    int side_3;
    printf("Enter length of side 1: ");
    scanf("%d",&side_1);
    printf("Enter length of side 2: ");
    scanf("%d",&side_2);
    printf("Enter length of side 3: ");
    scanf("%d",&side_3);
    if ((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_2 + side_3 > side_1))
    {
        printf("The triangle is valid!");
    }
    else
    {
        printf("The triangle is not valid!");
    }
    
}