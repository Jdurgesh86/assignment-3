#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=97 && c<=122)
       printf("given alphaber is lowercase");
    else if(c>=65 && c<=90)
       printf("given alphaber is uppercase");
        else if(c>=48 && c<=57)
       printf("given input is a digit");
       else
        printf("given input is a special character");
}