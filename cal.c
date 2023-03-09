#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("input an operator\n");
    scanf("%c",&op);
   
    printf("enter the 2 numbers:\n");
    scanf("%d%d",&n1,&n2);
    

    switch (op)
    {
    case '+':
        
        printf("%d+%d=%d",n1,n2,n1+n2);
        break;
        case '-':
        printf("%d-%d=%d\n",n1,n1,n1-n2);
        break;
        case '*':
        printf("%d*%d=%d\n",n1,n2,n1*n2);
        break;
        case '/':
        printf("%d/%d=%d\n",n1,n2,n1/n2);
        break;
    
    default:
    printf("default");
        break;
    }
    


    return 0;
}
