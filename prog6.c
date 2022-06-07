#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char al ='A';
        for(j=5;j>=i;j--)
        {
            printf("%c",al);
            ++al;
        }
        printf("\n");
    }
    return 0;
}