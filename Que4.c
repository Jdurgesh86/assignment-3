#include<stdio.h>
int main()
{
    int num,ans;
    printf("Enter a number ");
    scanf("%d",&num);
    ans=num/2;
    if((ans*2)==num)
       printf("number is even");
    else 
       printf("number is odd");
}
