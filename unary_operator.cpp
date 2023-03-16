#include<iostream>
using namespace std;
class Unary_operator{
int a,b;
public:
void input_user(){
cout<<"Enter two Numbers :\n";
cin>>a;
cin>>b;
}
void oper++(){
a++;
b++;
}
void oper--(){
a--;
b--;
}
void display(){
cout<<"\n A :"<<a;
cout<<"\n B ;"<<b;
}
};
int main(){
Unary_operator num;
num.input_user();
--num;
--num;
cout<<"After Decrement the value:";
num.display();
++num;
++num;
cout<<"\nafter Incerement the value:";
num.display();
return 0;
}