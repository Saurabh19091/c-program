// here we are finding ith bit using bit wise operator 
// first left shift the bit with the postion and do and ie.(1<<i) here i is position of bit.
// then if n&(i<<pos)
#include<iostream>
using namespace std;

 int getbit(int n, int pos){
     return (n&(1<<pos)!=0);
 }

     
 
 int main()
 {
     cout<<getbit(5,2)<<endl;
 
 return 0;
 }