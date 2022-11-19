#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers ");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
       printf("numbers are same");
    else if(num1>num2)
            printf("num 1 is greater");
         else
            printf("num 2 is greater");
    
}