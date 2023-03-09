#include<stdio.h>
int main(){
    int n,pos,elem;
    int arr[n];
    printf("enter the size : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	printf("enter the position and element : ");
	scanf("%d%d",&pos,&elem);
	for(int i=n;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=elem;
	
	
	for (int i=0;i<=n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}