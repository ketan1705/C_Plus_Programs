#include<iostream>
using namespace std;
class tabel{
    public:
    int num;

void display(){
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = " <<num*i<<endl;
        
    }
}
};
int main(){
    tabel obj;
    obj.display();
    return 0;

}