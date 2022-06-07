#include <stdio.h>
int main() {
    int rows=5,sum=1,space,i,j;
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i-1;space++)
        printf(" ");
        for(j=0;j<=i;j++) {
            if (j==0)  sum=1;
            else  sum=sum*(i-j+1)/j;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}