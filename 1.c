/*Program in c to print a pattern of
 * 1
 * 22
 * 333
 * 4444
 * 55555*/
#include <stdio.h>

int main()
{
    int i,j; //variable declaration
    for(i=1;i<=5;i++) //Outer loop
    {
        for (j = 1; j <= i; j++) //Inner loop
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
