#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;

    file= fopen("Basic","a");
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name:");
        gets(name);
        printf("Enter your age:");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d",name,age);
        printf("File is written successfully\n");
        fclose(file);
    }
    getch();

}
