#include <stdio.h>

int main ()
{
    int sum=0,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
}