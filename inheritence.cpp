#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
	void fun(){
		cout<<"Enter the numbers:";
		cin>>x>>y;
	}
};
class B : public A{
	public:
	void sum(){
		cout<<"The sum is:"<<x+y<<endl;
	}	
};

int main(){
	B obj;
	obj.fun();
	obj.sum();
	return 0;
}