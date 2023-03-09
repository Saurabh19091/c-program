#include<stdio.h>
int fibonnaci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
    

};
int main(){
    int n,ans;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        ans=fibonnaci(i);
        printf("%d\n",ans);

    }
}










