//  program to find sum of Five float number and display sum on screen.
#include <stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter first float :");
    scanf("%f" , &a);
    printf("Enter second float :");
    scanf("%f" , &b);
    printf("Enter third float :");
    scanf("%f" , &c);
    printf("Enter fourth float :");
    scanf("%f" , &d);
    printf("Enter fifth float :");
    scanf("%f" , &e);
    f=a+b+c+d+e;

    printf("sum = %f" ,f);
    return 0;
}
