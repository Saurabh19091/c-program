#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
    int rem=a%b; // here 42%24=18 rem=18,a=42,b=24
    a=b;        // here a=42 converted to a=24 menas 24%18=6 and b= rem
    b=rem;
    }
    return a;
}
int main(){
    int a,b;
    
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}