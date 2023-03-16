#include<iostream>
using namespace std;
class area{
    int a1,b1,e;
    public:
    area(int a,int b){
        a1=a;
        b1=b;
        e=a*b;
        
    }
    area(area &c){
        e=c.e;
        cout<<"Area of rectangle is "<<e;
    }
    ~area(){
        cout<<"Destructor";
    }
};
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    area obj(a,b);
    area obj1(obj);
    return 0;
}