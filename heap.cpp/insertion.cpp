#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }

void insert(int val){
    size=size+1;
    int index=size;
    arr[index]=val;
    while(index>1){
        int parent =index/2;
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else {
            return ;
        }
    }
}
void deletefromheap(){
    if(size==0){
        return;

    }
  //  step 1- put the root element to last index
    arr[1]=arr[size];
    // step2- delete the last element 
    size--;
// babu rao pagal hai
    // step 3- fixed the position to right position
     int i=1;
     if(i<size){
        int lindex=2*i;
        int rindex=2*i+1;
        if(lindex<size && arr[i]<arr[lindex]){
            swap(arr[i],arr[lindex]);
            i=lindex;
        }
        else if (rindex<size && arr[i]<arr[rindex])     
    
        {
            swap(arr[i],arr[rindex]);
            i=rindex;
        }
        else{
            return ;

        }
        
     }

}
void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
}
};


int main()
{
    heap h;
    h.insert(10);
    h.insert(78);
    h.insert(70);
    h.insert(90);
    h.insert(89);
    
    
    h.print();
    h.deletefromheap();
    h.print();

    return 0;
}
