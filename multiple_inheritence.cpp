#include<iostream>
using namespace std;
class A{
	public:
	int x,y;
	void rectangle(){
		cout<<"Enter the lenght and breadth:";
		cin>>x>>y;
	}
};
class B{
	public:
	int a;
	void square(){
	cout<<"Enter the side:";
	cin>>a;
	}
};
class C:public A,public B{
	public:
	void area(){
		cout<<"Area of rectangle:"<<x*y<<endl;
		cout<<"Area of square:"<<a*a<<endl;
	}
};
int main(){
	C obj;
	obj.rectangle();
	obj.square();
	obj.area();
	return 0;
} 