// function prototype

#include <iostream>
using namespace std;
//function prototype -- function prototype are use when we put function at last the main function 
//type function-name (argument)-syntax---- it tell the copmpiler initially that which function is going to use
// compiler phle se tayar hota jata h fun ko execute krne ke liye,,, ye assurity deta h copiler ko ki dhundho sum aage h 
 //int sum(int a,int b);// acceptable
// int sum(int a, b )- not acceptable
int sum ( int, int );// acceptable

int main()
{
    int num1,num2;
     cout<<"Enter the  first num"<<endl; 
     cin>>num1;
     cout<<"enter the second num"<<endl;
     cin>>num2;
// num1 and num2 are actual parameter
     cout<<"the sum is = "<<sum(num1,num2);



    return 0;
}
int sum(int a,int b){// formal parameter are those which we define in a fun 
    // a nad b will taking value from actual parameter from num1 nad num2
    int c=a+b;
    return c;
}
