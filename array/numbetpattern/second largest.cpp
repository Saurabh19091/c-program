#include<iostream>
using namespace std;
#include <climits>


int main(){    
	int n;
    cin>>n;
    
    int largest=INT_MIN, slargest=INT_MIN;
    
    if(n==0)
    {
        cout<<slargest;
    }
    
    else
    {
        int num;
        cin>>num;
        slargest=largest;
        largest=num;
        for(int i=1;i<n;i++)
        {
            cin>>num;
            
            if(num>largest)
            {
                slargest=largest;
        		largest=num;
            }
            
            else if(num>slargest && num<largest)
            {
                slargest=num;
                
            }
            
            
        }
        
        cout<<slargest;
        
        
    }

}
    