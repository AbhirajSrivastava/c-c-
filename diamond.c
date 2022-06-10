#include<stdio.h>
int main()
{
int a;
printf("enter the number of rows ");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
    for(int j=1;j<=a;j++)
    {
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1)
            printf("*");
            else
            printf(" ");
        }
    }
    printf("\n");
}
for(int i=a-1;i>=1;i--)
{
    for(int j=a;j>=1;j--)
    {

        for(int k=1; k<=2*i-1; k++)
        {
            if(k==1||k==2*i-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
 
    return 0;
}
}