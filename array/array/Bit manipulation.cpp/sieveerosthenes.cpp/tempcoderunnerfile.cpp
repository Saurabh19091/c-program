#include<iostream>
using namespace std;
void primefactor(int n){
    int spf[n+1]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i; // here i set number itself is as a smallest prime factor
        
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){


           cout<<spf[i];
        }
    }
           
    

}

int main()
{
    int n; 
    cin>>n;
    primefactor(n);
    return 0;
}

    
