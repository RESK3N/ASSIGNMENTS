//program to show menu , take order and calculate the bill
#include <stdio.h>
int main() // main function
{
    int t,n,s; //variable declaration
    int p=0,c=0; // variable declaration and initialisation
    printf("____THE CHINA TOWN____\n");
    printf("MENU ->>\n ");
    printf("1> EGG CHOUMEIN = 60/- \n 2> CHICKEN CHOWMEIN = 75/- \n 3> CHILLY CHICKEN = 40/- \n 4> EGG FRIED RICE = 50/- \n 5> MIXED FRIED RICE = 65/- \n 6> COMPLETE ORDER \n ");
    do //do while loop
    {
        printf("\nPLEASE ENTER YOUR SELECTION > ");
        scanf("%d",&c); // selection input
        if (c<6) //start of if-else sequence
        {
            printf("\nPLEASE ENTER NUMBER OF PORTIONS >>");
            scanf("%d",&n);
            p=p+n;
        }
        if(c==1) // EGG CHOWMEIN
        {
            printf("\n%d PORTION OF EGG CHOUMIEN SELECTED \n",n);
            t=t+(60*n);
            s=60*n;
            printf("PRICE = %d\n",s);
        }
        if(c==2) //CHICKEN CHOWMEIN
        {
            printf("\n%d PORTION OF CHICKEN CHOWMEIN SELECTED \n",n);
            t=t+(75*n);
            s=75*n;
            printf("PRICE = %d\n",s);
        }
        if(c==3) //CHILLY CHICKEN
        {
            printf("\n%d PORTION OF CHILLY CHICKEN SELECTED \n",n);
            t=t+(40*n);
            s=40*n;
            printf("PRICE = %d\n",s);
        }
        if(c==4) //EGG FRIED RICE
        {
            printf("\n%d PORTION OF EGG FRIED RICE SELECTED \n",n);
            t=t+(50*n);
            s=50*n;
            printf("PRICE = %d\n",s);
        }
        if(c==5) //MIXED FRIED RICE
        {
            printf("\n%d PORTION OF MIXED FRIED RICE SELECTED \n",n);
            t=t+(65*n);
            s=65*n;
            printf("PRICE = %d\n",s);
        }
        if(c<=0||c>=7)
        {
            printf("WRONG SELECTION PLEASE TRY AGAIN !!!");
        }
    } while (c!=6); //loop condition
    printf("---------------------------------\n");
    printf("\n\nTOTAL NUMBER OF PORTIONS ORDERED >> %d \nYOUR GRAND TOTAL = %d",p,t);
    printf("\nENJOY YOUR MEAL !");
}
