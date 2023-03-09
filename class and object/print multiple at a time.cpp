#include<iostream>
using namespace std;
class myClass{
    public:
    string name;
    int rollno ;
    bool gender;
    void printinfo(){
        cout<<"name"<<"="<<name<<endl;
        cout<<"rollno"<<"="<<rollno<<endl;
        cout<<"gender"<<"="<<gender<<endl;


    }
};
int main(){
myClass arr[2];
 for(int i=0;i<2;i++){
    cin>>arr[i].name;
    cin>>arr[i].rollno;
    cin>>arr[i].gender;
}
for(int i=0;i<2;i++){
    arr[i].printinfo();
}
}

