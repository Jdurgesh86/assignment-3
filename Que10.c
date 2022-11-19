#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter cost price and selling price ");
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
       printf("product is in loss percentage %.2f",(cp-sp)/cp*100);  
    else
       printf("product is in profit percentage %.2f",(sp-cp)/sp*100);  
}