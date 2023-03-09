#include<iostream>
using namespace std;
 int uniquenum(int arr[],int n){
     int res=0;
     for(int i=0;i<n;i++){
         res=res^arr[i];
        
     }
      return res;
 }
 int main()
 {
     int arr[5]={2,4,3,4,2};
     cout<<uniquenum(arr,5)<<endl;
     return 0;
 }