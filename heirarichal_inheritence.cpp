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
class C: public A{
	public:
	void Area(){
		cout<<"The Area is:"<<x*y<<endl;
	}
};
int main(){
	B obj;
	C obj1;
	obj.fun();
	obj.sum();
	obj1.fun();
	obj1.Area();
	return 0;
}