#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<&n<<endl;
    int *u= &n;
    cout<<u<<endl;
    cout<<*u<<endl;
    *u=10;
    cout<<*u<<endl;
    cout<<n<<endl;
    int s;
    int *ptr=&s;
    *ptr=7;
    cout<<s;


}