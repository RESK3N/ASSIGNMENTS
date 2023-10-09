//Program in C to print a hourglass shape with asterisk
#include <stdio.h>
int main()
{
    int i,j,lim; // i = outer loop , j= inner loop 1 ,k= inner loop 2, l = limit of pattern
    printf("ENTER THE LIMIT OF PATTERN >> ");
    scanf("%d",&lim);
    printf("\n");
    for (i=0;i<=lim;i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = lim - i; j >= 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=lim;i++)
    {

        for (j = lim; j>i; j--)
        {
            printf(" ");
        }
        for (j = 0; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}