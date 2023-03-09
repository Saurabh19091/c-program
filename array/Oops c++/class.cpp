class student{
    public :
    int age;
    private :
    int rollnumber;

    void display(){
        cout<<age<<" "<<rollnumber<<endl;
    }
    int getrollnumber(){
        return rollnumber;
    }
    void setrollnumber(int a,int password){
        if(password != 123){
            return;
        }
        if(a<0){
            return;
        }
        a=age;
    }
};