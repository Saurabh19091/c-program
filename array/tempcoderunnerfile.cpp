#include<iostream>
using namespace std;

void insertatpos(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        arr[i]=arr[i+1];
        }
        n--;
    }
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int n;
    cout<<"enter the size\n";
    cin>>n;
    int arr[n];
    cout<<"enter the array element\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    
    cout<<"enter the element to be inserted";
    cin>>x;
    insertatpos(arr,n,x);

    return 0;
}
