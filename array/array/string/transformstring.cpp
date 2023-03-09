#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s ="hbbhbkjhbjbhj";
// to convert lower to upper case and vice versa we use transform function ok 
    transform(s.begin(),s.end(),s.begin(), :: toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),:: tolower);
    cout<<s<<endl;
    return 0;
}