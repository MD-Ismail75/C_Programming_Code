//Write a program that read 'n' number and display sum and average

#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("How many numbers:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is:%d\n",sum);
    printf("The average is:%.2f",(float)sum/n);

    getch();


}
