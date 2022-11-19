#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if (num<1000&&num>99)
       printf("number is three digits");
    else 
       printf("number is not a three digits");
}