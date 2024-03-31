#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    int age;
};

int main()
{
    struct student details;
    {
        printf("Enter name: ");
        scanf("%s", &details.name);
        printf("Enter roll: ");;
        scanf("%d", &details.roll);
        printf("Enter age: ");
        scanf("%d", &details.age);

        printf("Name: %s\n", details.name);
        printf("Roll: %d\n", details.roll);
        printf("Age: %d", details.age);
    };
    return 0;
}