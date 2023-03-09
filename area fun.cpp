#include <iostream>
using namespace std;

int areaofrec(int length,int breadth)
{
    int area;

area=length*breadth;
return area;
}

int main()
{
    int l=20,b=30;
    int area=areaofrec(l,b);
    cout<<"area of rectangle="<<area<<endl;

    return 0;
}
