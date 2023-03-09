#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){ //yha pr function ka use hua h array element ko recall krne ke liye
    for(int i=0;i<n;i++){
        if(arr[i]==key){ //ise statemengt ka use hua h ye batene ke liye ki arr[i]==key ka hai ki ni means 
        //element ko search krne ke liye 
        return i;
        }
    }
    return -1; // agar aiesa number input kre jo arr elemnt se belong ni krta h to oo -1 print krega 
    
}

    
    



int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];

    }
    int key;
    cin>>key;

    cout<<linearsearch(arr,n,key)<<endl; // uper wla function ko recall krne ke liye ye lagya jata h bhai 

    
    return 0;
}
