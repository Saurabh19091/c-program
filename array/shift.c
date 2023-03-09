#include<stdio.h>


int main(){
    int pos,element;
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
printf("enter the position\n");
scanf("%d",&pos);
printf("enter the value at position\n");
scanf("%d",&element);

for(int i=n;i>=pos;i--){
arr[i+1]=arr[i];
}

arr[pos]=element;

printf("new array\n");

for(int i=0;i<=n;i++){
    printf("%d",arr[i]);
}
}



      
        
        

    

        
    
    
        
        
        

    

    
    


