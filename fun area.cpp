//function is use again and again no need to write program twice ok see example here //
#include <iostream>
using namespace std;


int areaofrectangle ( int length,int breadth)
{
    
    int area=length*breadth;
    return area;
}
int main()
{
    int l=2,b=8;
    

    cout<<areaofrectangle(l,b)<<endl;
    

      l=89,b=2;
    

    cout<<areaofrectangle(l,b)<<endl;
    return 0;

}

