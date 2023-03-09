#include<iostream>
#include<math.h>
using namespace std;
int main(){


int n,sum=0,a;
cout<<"enter the number that you want cube"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    a=i*i*i;
    sum+=a;

}
cout<<sum<<endl;
}

