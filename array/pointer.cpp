#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* aptr=&a;
    //&= operator that store address of variable 

    cout<<aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    return 0;

}