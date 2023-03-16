/*#include<iostream>
using namespace std;
class Distance{
    private:
    int meter;
    public:
    friend int func(Distance);
};
int func(Distance d){
    d.meter = 10;
    return d.meter;
}
int main(){
    Distance D;
    cout<<"Distance is "<<func(D);
    return 0;
}*/
#include<iostream>
using namespace std;
class Area{
    private:
    int l,b,c;
    public:
    friend int func(Area);
};
int func(Area d){
    cout<<"Enter the length: ";
    cin>>d.l;
    cout<<"Enter the breadth: ";
    cin>>d.b;
    d.c=d.l*d.b;
    return d.c;
}
int main(){
    Area D;
    cout<<"Area is "<<func(D);
    return 0;
}