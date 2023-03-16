#include<iostream>
using namespace std;
class bca{
    int a,b;
    public:
    bca(){
        a=5;
        b=10;
        cout<<"a="<<a<<"b="<<b;
    }
    ~bca(){
        cout<<"destructor";
    }
};
int main(){
    bca obj;
}