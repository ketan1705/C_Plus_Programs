#include<iostream>
using namespace std;
class A{
	public:
	int x,y;
	void detail(){
		cout<<"Enter the numbers:";
		cin>>x>>y;
	}
};
class B: public A{
	public:
	void rectangle(){
	cout<<"Area of rectangle: "<<x*y<<endl;
	}
};
class C:public B{
	public:
	void square(){
		cout<<"Square of x:"<<x*x<<endl;
		cout<<"Square of y:"<<y*y<<endl;
	}
};
int main(){
	C obj;
	obj.detail();
	obj.rectangle();
	obj.square();
	return 0;
} 