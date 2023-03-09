#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string ar;
    cin>>ar;
    int n=ar.size();
    
    
   

    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(ar[i]==ar[j]){
                for(int k=j;k<n;k++){
                    ar[k]=ar[k+1];
                }
                 n--;
                 j--;
                }
             }
    }
        for(int i=0;i<n;i++){
            cout<<ar[i];
        }
}
    
        
    







      
        
        

    

        
    
    
        
        
        

    

    
    


