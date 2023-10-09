//Program in C to print a hourglass shape with asterisk
#include <stdio.h>
int main()
{
    int i,j,lim; // i = outer loop , j= inner loop 1 ,k= inner loop 2, l = limit of pattern
    printf("ENTER THE LIMIT OF PATTERN >> ");
    scanf("%d",&lim); // User input
    printf("\n");
    for (i=0;i<=lim;i++) //outer loop 1
    {
        for (j = 0; j < i; j++) // inner loop 1-1
        {
            printf(" ");
        }

        for (j = lim - i; j >= 0; j--) // inner loop 1-2
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=lim;i++) //outer loop 2
    {

        for (j = lim; j>i; j--) // inner loop 2-1
        {
            printf(" ");
        }
        for (j = 0; j <=i; j++) // inner loop 2-2
        {
            printf("* ");
        }
        printf("\n");
    }
}