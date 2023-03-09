#include<iostream>
using namespace std;
 int main(){
     int snum,ednum,sum=0;
     cout<<"Enter the first number"<<endl;
     cin>>snum;
     cout<<"Enter the last number"<<endl;
     cin>>ednum;

     while(snum<=ednum){
         sum=0;

         for(int i=1;i<snum;i++){
             if(snum%i==0){
                 sum=sum+i;
             }
         }
         if(sum==snum)
             cout<<snum<<endl;
             snum++;
         
     }

 }