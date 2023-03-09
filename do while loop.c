#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    do{
        printf("%d",n);
        scanf("%d",&n);
    }
    while(n>0);
    return 0;
}