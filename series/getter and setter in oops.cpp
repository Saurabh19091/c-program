#include<iostream>
using namespace std;

class vikash{
    private:
    int sallary;
    public:
    int getsallary(){
        return sallary;
    }
    void setsallary(int s){
        sallary=s;

    }
};


int main()
{
    vikash rent;
    rent.setsallary(10000);
    cout<<rent.getsallary();

    return 0;
}
