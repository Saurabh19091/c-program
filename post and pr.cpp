#include <iostream>
using namespace std;


int main()
{
    int i=3;
    //3    //3   //4   //4
    i=i++ + --i+ ++i - i--;

    cout<<i<<endl;
    return 0;
}
