//Program in C to print a square pattern with asterisk(*)
#include <stdio.h>
int main()
{
    int i,j,lim;
    printf("ENTER THE LIMIT OF PATTERN >> ");
    scanf("%d",&lim);
    printf("\n");
    for(i=0;i<lim;i++)
    {
        printf("* ");
    }
    printf("\n");
    for(i=2;i<lim;i++)
    {
        printf("* ");
        for(j=1;j<=lim;j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=0;i<lim;i++)
    {
        printf("* ");
    }
}