#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "earn Soft Skills today: find your Soft Skills online course on Udemy. Learn Soft Skills today: find your Soft Skills online course on Udemy . Skip to content. Categories Search for anything. Development. Web Development Data Science Mobile Development Programming Languages Game Development Database Design & Development Software Testing Software Engineering Software Development Tools No-Code Development. Business. Entrepreneurship Communication Management Sales Business Strategy Operations ...";

    // convert small to capital

    for(int i=0 ;i<str.size(); i++){

        if(str[i]>='a' && str[i<='z']){
            str[i]-=32;
            
        }

    }
    cout<<str;

    return 0;
}
    
    
   
    





    

