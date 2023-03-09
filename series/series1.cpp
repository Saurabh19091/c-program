#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    double a,sum=0;
    cout<<"enter the last series number"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        a=1/pow(i,i);
        sum=sum+a;

    }
    cout<<sum;
    return 0;

}