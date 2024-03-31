#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int age;
};
int main()
{
    int num;
    int i;
    printf("How many student details you want to input?: ");
    scanf("%d", &num);
    struct student details[num];
    {
        for ( i = 0; i < num; i++)
        {
            printf("Enter name: ");
            scanf("%s", &details[i].name);
            printf("Enter roll: ");
            scanf("%d", &details[i].roll);
            printf("Enter age: ");
            scanf("%d", &details[i].age);
        }
        for ( i = 0; i < num; i++)
        {
            printf("%s\n", details[i].name);
            printf("%d\n", details[i].roll);
            printf("%d\n", details[i].age);
        }
        
    }
    
}
