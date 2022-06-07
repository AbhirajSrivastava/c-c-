#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;
    printf("enter first integer :");
    scanf("%d",&a);
    printf("enter second integer :");
    scanf("%d",&b);
    printf("enter third integer :");
    scanf("%d",&c);
    printf("enter fourth integer :");
    scanf("%d",&d);
    printf("enter fifth integer :");
    scanf("%d",&e);
    avg=(a+b+c+d+e)/5;
    printf("the average of the giveen 5 integers is %d",avg);
    return 0;

}