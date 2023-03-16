#include<iostream>
using namespace std;
class BCA{
    int a1,b1,e;
    public:
    BCA(int a,int b){
        a1=a;
        b1=b;
        e=a1+b1;
        
    }
    BCA(BCA &c){
        e=c.e;
        cout<<"SUm of two number is "<<e;
    }
};
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    BCA obj(a,b);
    BCA obj1=obj;
    return 0;
}