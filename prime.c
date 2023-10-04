#include<stdio.h>
int main()
{
    int num,cpy,flag=0;
    printf("ENTER A NUMBER >> ");
    scanf("%d",&num);
    cpy=num;
    while(num!=0)
    {
        if(cpy%num==0)
        {
            flag++;
        }
        num--;
    }
    if(flag==1)
    {
        printf("\n%d is a prime number",cpy);
    }
    else
    {
        printf("\n%d is a composite number",cpy);
    }
}