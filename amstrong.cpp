#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,originalnum=n;

    while(n>0){
       int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originalnum){
        cout<<"the num is armstrong\n";
    }
    else{
    cout<<"it is not armstrong";
}



    return 0;
}
