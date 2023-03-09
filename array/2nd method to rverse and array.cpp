#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"print original array"<<endl;
    for(int i=0;i<n;i++){
    
    cout<<arr[i]<<"  ";
    
    }
    cout<<endl<<"the reversal array is "<<endl;
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<"   ";
    }
}