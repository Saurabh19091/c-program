#include<iostream>
using namespace std;

void primesieve(int n){
    int prime[n+1]={0}; //we have set array of n+1
    for(int i=2;i<=n;i++){
        if(prime[i]==0){ // to chose the number prime 
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1; /// to mark the number we use this 
            
            }
        }
        
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==0){ // this is for the number that is not marked inthe array
            cout<<i<<" ";
        
        
        
        }
    }cout<<endl;
}

int main(){
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}