#include<iostream>
using namespace std;
int main(){
    int num,count =0;
    cout<<"enter the last number from where you have to print peime number"<<endl;
    cin>>num;
    for(int i=num-1;i>=i;i--){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;

            }
        }
            if(count==0){
                if(i==1){
                    cout<<"the number is less than 2"<<endl;
                    break;
                }
                cout<<"the last prime number is"<<i<<endl;
                break;

            }
            count=0;
        
    }
    return 0;
}