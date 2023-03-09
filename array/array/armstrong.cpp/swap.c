#include<stdio.h>
void swapa(int *,int *);

int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    swapa(&a,&b);
    printf("value of a:%d \n value of b:%d",a,b);
    
    return 0;
}
void swapa(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
