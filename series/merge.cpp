#include<bits/stdc++.h>
using namespace std;

void merge( int arr[],int  const l,int const mid,int const r){
    // create array size
    int x1=mid-l+1;
    int x2=r-mid;
    int  a[x1],b[x2];
     // temporatry array
    for(int i=0;i<x1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<x2;j++){
        b[j]=arr[mid+1+j];
    }
    a[x1]=b[x2]=INT_MAX;
     int i=0;
     int j=0;
     int k=1;
    for( int i=l;i<=r;i++){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=a[j];
            j++;
        }
        k++;
    
    }

    
}  


void mergesort( int arr[],int const l,int const r){
    if(l==r){  // base case
        return;
    }
    int mid=(l+(r-l))/2;
    mergesort( arr,l,mid);
    mergesort( arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);

    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}