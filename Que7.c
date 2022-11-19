#include<stdio.h>
int main()
{
    int a,b,c,roots;
    printf("Enter values of a,b,c ");
    scanf("%d %d %d",&a,&b,&c);
    roots=(b*b)-(4*a*c);
    if(roots>0)
       printf("Distinct and real roots");
    else if(roots==0)
           printf("real and equal roots");
         else
           printf("imaginary roots");
}