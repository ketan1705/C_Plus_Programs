// Base Class default constructor in derived class constructor
#include<iostream>
using namespace std;
class Base{
	int x;
	public:
	Base()
	{
	cout<<"Base default constructor"<<endl;
	}
};
class Derived : public Base{
	int y;
	public:
	Derived()
	{
		cout<<"Derived default constructor"<<endl;
	}
	Derived(int i){
		cout<<"Derived parameterized constructor";
	}
};
int main(){
	Base b;
	Derived d1;
	Derived d2(10);
	return 0;
}