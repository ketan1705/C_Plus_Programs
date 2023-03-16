/*#include<iostream>
using namespace std;
int main(){
    
    for(int i=0;i<10;i++){
        
        static int a=0;
        cout<<"a= "<<a<<endl;
        a++;

    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class fun{
    public:
    static int a; 

    void abc()
    {
        for(int i=0;i<10;i++){
            cout<<"a= "<<a<<endl;
            a++; 
        }
    }
};
int fun::a=0;
int main()
{
    fun obj;
    obj.abc();
    return 0;
}*/


#include<iostream>
using namespace std;
class fun{
    int data;
    public:
    static int a; 
    void setdata(int d){
        data = d;
        a++;
    }

    void abc()
    {
        cout<<"data="<<data;
        cout<<"count="<<a<<endl;
    }
};
int fun::a=0;
int main()
{
    fun obj;
    obj.setdata(10);
    obj.setdata(20);
    obj.setdata(30);
    obj.setdata(40);
    obj.abc();
    obj.abc();
    obj.abc();
    return 0;
}