#include<stdio.h>

void rotatearray(int arr[],int n,int k){
    int b[n];

    for(int i=0;i<n;i++){
        b[(i+k)%n]=arr[i];
    }

    for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
}
// bro bro

int main(){
    int n;
    int arr[n];
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    rotatearray(arr,n,k);
}