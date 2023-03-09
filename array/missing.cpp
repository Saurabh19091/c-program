#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int s=n*(n+1)/2;

    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    int misingnumber = s-sum;
    cout<<"missing number is :"<<misingnumber;
}
    


                
            
            
        

    

