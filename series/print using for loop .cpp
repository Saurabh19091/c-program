#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   
     int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        //cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl; second method
        if(i<=9){
            cout<<c[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
}
    
        
    return 0;
}
