#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //cout<<arr[i]<<" ";

    }
    for(int i=0,j=n-1;i<n/2;i++,j--){
        //for(int j=n-1;j>=0;j--){

   // for(int j=n-1;j>0;j--){
        /* arr[i]=arr[i]+arr[j];
         arr[i]=arr[i]-arr[j];
         arr[j]=arr[i]-arr[j]; */
          int  temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
        
        
        

    

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    
}