#include<stdio.h>
int main()
{
    int month,day=30;
    printf("Enter the month number ");
    scanf("%d",&month);

    if(month%2==0)
    {
        if(month==2)
            day-=3;
        if(month==8)
            day=day+1;
        printf(" There is %d days",day+1);
    }
    else
     printf(" There is %d days",day);

}