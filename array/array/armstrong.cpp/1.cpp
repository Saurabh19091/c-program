#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the number that you want to check\n";
    cin>>n;
    int sum=0,r;
    int temp=n;
    while(n!=0){
    r=n%10;
    sum=sum+(r*r*r);
    n/=10;
    
    }
    cout<<n<<" "<<temp;
    cout<<endl;
    if(sum==temp){
        cout<<"the number is armstrong ";

    }
    else {
        cout<<"the number is not armstrong";
    }
    
    return 0;
}
