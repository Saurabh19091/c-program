//functio use hota gar app koi bade kam ko krna chahenge to bhot barr code likhna hoga but function usse simple 
// subtask me torta jisko hm brr brr use kr skte h

#include <iostream>
using namespace std;

int sum(int a,int b){ //yha pr hmlog function ka syntax follow kiye h 
    int c=a+b;
    return c;
}
int main()
{
    int num1,num2;
     cout<<"Enter the  first num"<<endl; //yha ye number ko input leker uper wale function ko bhej dega 
     cin>>num1;
     cout<<"enter the second num"<<endl;// arr jo sum(inta,intb) hai usme num1 arr num2 ka dal dega 
     cin>>num2;//uske baad c ka value is fun me sum(num1,num2) me add krke dal dega 

     cout<<"the sum is = "<<sum(num1,num2);

    return 0;
}

