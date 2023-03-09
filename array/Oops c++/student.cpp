#include<iostream>

using namespace std;

class student{
    public :
    int age;
    private :
    int rollnumber;
    public :

    void display(){
        cout<<age<<" "<<rollnumber<<endl;
    }
    int getrollnumber(){
        return rollnumber;
    }
    void setrollnumber(int a,int password){
        if(password!= 123){
            return;
        }
        
        
        
        rollnumber=a;
    }
};

int main()
{
    student s1;
    s1.age=12;
    s1.setrollnumber(25,123);


    student *s2=new student();
    s2->age=23; // (*s2).age=23 both are same only
    s2->setrollnumber(45,123);
    s1.display();
    s2->display();
    
    return 0;
}
