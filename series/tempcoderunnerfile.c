#include<stdio.h>
int main()
{
    int year;
    printf("enter the year that you want to check\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("year is leap year");
    }
        else
        printf("not leap year");
    
    return 0;


}