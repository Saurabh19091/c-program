#include<iostream>
using namespace std;
class rmember{
    public:
    string name;
    int age;
    bool gender;
};
int main(){
    rmember myobj;
    myobj.name="shashi";
    myobj.age=23;
    myobj.gender=0;

    rmember myobj2;
    myobj2.name="vikash";
    myobj2.age=19;
    myobj2.gender=1;

    cout<<myobj.name<<" "<<myobj.age<<"  "<<myobj.gender<<endl;
    cout<<myobj2.name<<" "<<myobj2.age<<" "<<myobj2.gender<<endl;
    return 0;
}