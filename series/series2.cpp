#include<iostream>
using namespace std;
int main(){
    int sum=0,n,a;
    cout<<"enter the sries last number";
    cin>>n;
    for(int i=1;i<=n;i++){
        a=i*i;
        sum=sum+a;

    }
    cout<<sum;
}