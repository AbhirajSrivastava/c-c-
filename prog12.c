#include<stdio.h>
int main()
{
    int i,j;
    char space;
    for(i=5;i>=1;i--)
    {
        for(space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        char al= 'A';
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%c",al);
            ++al;
        }
        printf("\n");
    }
    return 0;
}