#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "gvgvvhgbjhgyfeydhgeg";

    // convert small to capital

    for(int i=0 ;i<str.size(); i++){

        if(str[i]>='a' && str[i<='z']){
            str[i]-=32;
            
        }

    }
    cout<<str;

    return 0;
}
    
    
   
    





    

