#include <iostream>
using namespace std;

int main()
{
    int n,rev=0;
    cout<<"enter the number";
    cin>>n;

    while(n>0){
        rev=rev*10+n%10;//here if we take value 234 then firstly we multiply  it by 10 then+n%10 we get reverse value.
        // we write it in the copy
        n=n/10;
    }
        cout<<rev<<endl;
    
        
    



    return 0;
}
