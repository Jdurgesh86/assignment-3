#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num%5==0)
       printf("number is divisible by 5");
    else 
       printf("number is  not divisible by 5");
}