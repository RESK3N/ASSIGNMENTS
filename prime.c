//Program in c to check if a number is prime or composite
#include<stdio.h>
int main()
{
    int num,cpy,flag=0; //variable declaration and initialisation
    printf("ENTER A NUMBER >> ");
    scanf("%d",&num);
    cpy=num;
    while(num!=0) //loop
    {
        if(cpy%num==0)
        {
            flag++; //keeping count of no of complete divisions
        }
        num--;
    }
    if(flag==2) //number is only divisable by one(flag=1) and itself (flag=2)
    {
        printf("\n%d is a prime number",cpy);
    }
    else // divisable by more than 2 numbers ,i.e-The number is composite
    {
        printf("\n%d is a composite number",cpy);
    }
}