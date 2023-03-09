#include<stdio.h>
int factorial(int);
int main(){
    int n,fact;
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);

}
int factorial(int n){
    int i,factorial=1;
    for(int i=1;i<n;i++){
        factorial=factorial*i;
    }
    return factorial;
}