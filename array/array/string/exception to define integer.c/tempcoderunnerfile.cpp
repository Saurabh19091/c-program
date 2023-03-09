#include<iostream>
using namespace std;
int main()
{
    cout<<"**************Welcome to the DK World  lets do coding on calculator*****************************"<<endl;
    
    char op;
    float n;
    int  sum=0;

    cout<<"choose the operation that you want to do(+,-,*,/)"<<endl;
    cin>>op;
    
    for(int i=0;i<n;++i){
    cout<<"give the number that  you want perform operation "<<endl;
    cin>>n;
    }

    switch (op)
    {
    case '+':


    
        
        cout<<"perform sum here   "<<sum<<endl<<"thank you guys have a great day"<<endl;
    
        break;
        case '-':
        
       // cout<<"perform subtract here     "<<endl<<n<<"-"<<n<<"="<<n1-n2<<endl<<"thank you guys have a great day"<<endl;;
        break;
        case '*':
        
      //  cout<<"perform multiplication here    "<<endl<<n<<"*"<<n<<"="<<n1*n2<<endl<<"thank you guys have a great day"<<endl;;
        break;
        case '/':
        
      //  cout<<"perform division here   "<<endl<<n<<"/"<<n<<"="<<n/n2<<endl<<"thank you guys have a great day"<<endl;;
        break;
    
    default:
    cout<<"you have entered wrongly operation"<<endl;
        break;
    }
    


    
    return 0;
}
