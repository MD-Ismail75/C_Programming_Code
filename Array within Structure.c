#include<stdio.h>
struct person
{
    char name;
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("\nEnter Information for person %d\n",i+1);
        printf("Enter Name:");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age:");
        scanf("%d",&person[i].age);
        printf("Enter Salary:");
        scanf("%f",&person[i].salary);
    }
    for(i=0;i<4;i++)
    {
        printf("\n\nInformation for person %d\n",i+1);
        printf("Name= %s\n",person[i].name);
        printf("Age= %d\n",person[i].age);
        printf("Salary= %f\n",person[i].salary);
    }
    getch();

}
