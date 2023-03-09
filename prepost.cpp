#include <iostream>
using namespace std;


int main()
{
    int i=2,j=3,k=1,m;
    m=i-- + j++ - ++k;

    cout<<i<<endl;//1
    
    cout<<j<<endl;//4
    
    cout<<k<<endl;//2
    cout<<m<<endl;//3
    

    return 0;
}
