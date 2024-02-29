// Days in a month for 2024
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("The month is January and it has 31 day");
        break;
    case 2:
        printf("The month is February and it has 29 day");
        break;
    case 3:
        printf("The month is March and it has 31 day");
        break;
    case 4:
        printf("The month is April and it has 30 day");
        break;
    case 5:
        printf("The month is May and it has 31 day");
        break;
    case 6:
        printf("The month is June and it has 30 day");
        break;
    case 7:
        printf("The month is July and it has 31 day");
        break;
    case 8:
        printf("The month is August and it has 30 day");
        break;
    case 9:
        printf("The month is September and it has 31 day");
        break;
    case 10:
        printf("The month is October and it has 30 day");
        break;
    case 11:
        printf("The month is November and it has 30 day");
        break;
    case 12:
        printf("The month is December and it has 31 day");
        break;
    
    default:
        if (month > 12)
        {
            printf("Invalid month");
        }
        break;
    }
}