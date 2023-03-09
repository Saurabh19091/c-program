#include<stdio.h>
int main ()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("Non-prime");
            break;
        }
    }
    if(i==n)
    {
        printf("prime");
    }
    return 0;


}