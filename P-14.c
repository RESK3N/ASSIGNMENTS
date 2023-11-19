//Write a program in c to make your own digital storage converter by taking the size in KB and convert it MB,GB and TB.
#include<stdio.h>
int main()
{
    float kb;
    printf("Enter the size in Kilo Bytes:\n");
    scanf("%f",&kb);
    printf("Size in Mega Bytes:%f\n",kb*0.001);
    printf("Size in Giga Bytes:%f\n",kb*0.000001);
    printf("Size in Tera Bytes:%f\n",kb*0.000000001);
}