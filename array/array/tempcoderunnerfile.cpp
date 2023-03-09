#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,45,56};
    //cout<<*arr<<endl;

    int *ptr=arr;
    for( int i=0;i<4;i++){

        cout<<*(arr+i)<<endl;
        //ptr++;

    }
    



    return 0;
}