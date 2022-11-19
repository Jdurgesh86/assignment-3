#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
       printf("the number is divisible by %d",num%7==0?7:3);
    else
       printf("the number is not divisible by 7 and 3");
}