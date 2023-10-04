#include <stdio.h>
#include <ctype.h>
int main()
{
    char a,i,j;
    printf("ENTER A CHARECTER >>");
    scanf("%c",&a);
    if(isalpha(a)!=0)
    {
        a = toupper(a);
        for (i = 'A'; i <= a; i++) {
            printf("\n");
            for (j = 'A'; j <= i; j++) {
                printf("%c", i);
            }
        }
    }
    else
    {
        printf("PLEASE ENTER AN ALPHABET ! TRY AGAIN !! \n");
    }
}