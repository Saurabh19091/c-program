#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    for(int num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            printf("The prime num=%d\n",num);
        }
    }


    return 0;
}
