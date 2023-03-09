#include<stdio.h>
//1 2  4 5
//0 1  2 3 position i

int main(){
    int pos,element;
    int n;// size of array
    printf("enter the size of array\n");
    scanf("%d",&n);// 4
    int arr[n];
    printf("enter the element");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);  

}
printf("enter the position\n");
scanf("%d",&pos); // 2
printf("enter the value at position\n");
scanf("%d",&element); // 3

for(int i=n;i>=pos;i--){
arr[i+1]=arr[i];
}

arr[pos]=element;
n++;

printf("new array\n");

for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
}