//1^2+2^2+3^2+....+n^2

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter last number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);
    getch();

}
