#include <stdio.h>
int main()
{
    char name[20][20];
    int roll[20];
    float marks[20];
    int search;
    int i;
    int num;
    char(*namePtr)[20];
    int *rollPtr;
    float *marksPtr;

    namePtr = name;
    rollPtr = roll;
    marksPtr = marks;

    printf("How many student details will be input: ");
    scanf("%d", &num);
    printf("Add students details: \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter name: ");
        scanf("%s", &namePtr[i]);

        printf("Enter roll: ");
        scanf("%d", &rollPtr[i]);

        printf("Enter marks: ");
        scanf("%f", &marksPtr[i]);
    }
    printf("Enter the index to search the student details: ");
    scanf("%d", &search);

    if (search >= 0 && search < num)
    {
        printf("Name: %s\n", namePtr[search]);
        printf("Roll: %d\n", rollPtr[search]);
        printf("Marks: %.2f\n", marksPtr[search]);
    }
    else
    {
        printf("Invalid input!");
    }
    return 0;
}