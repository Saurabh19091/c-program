#include<bits/stdc++.h>
using namespace std;

int main()
{
    // erase function use in two way like 
    // vectorname .erase(postion)
    // vectorname.erase(stratigpos,endpos)
    vector<int>v;
    
    v.push_back(2);
    v.push_back(9);
    v.push_back(3);
    v.push_back(8);
    vector<int> ::iterator it; // here we are using iterator function
    it=v.begin()+1;


    v.erase(it);

    
    
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}
