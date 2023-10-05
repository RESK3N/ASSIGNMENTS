//Program in C to print fibonacci series as asterisk pattern
#include <stdio.h>
int main()
{
    int i,j,a=1,b=0,c,lim;
    printf("ENTER LIMIT OF SERIES >> ");
    scanf("%d",&lim);
    printf("\n");
    for(i=1;i<=lim;i++)
    {
        c=a+b;
        b=a;
        a=c;
        for(j=1;j<=c;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}