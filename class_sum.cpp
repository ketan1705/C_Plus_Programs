#include<iostream>
using namespace std;
class addition{
	public:
		int a,b,c;
		
	void sum(){
		cout<<"enter the value";
		cin>>a>>b;
		c=a+b;
		cout<<"the sum is: "<<c;
		
	}
};
int main(){
	
	addition obj;
	obj.sum();
	return 0;
}