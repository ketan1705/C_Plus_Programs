#include<iostream>
using namespace std;
class Abc{
	int a,b;
	public:
	void insert(){
		cout<<"enter two numbers: ";
		cin>>a>>b;
	}
	void display(){
		if(a>b){
			cout<<"a is greater";
		}
		else{
			cout<<"b is greater";
		}
	}
	
};

int main(){
	
	Abc obj;
	obj.insert();
	obj.display();
	return 0;
	
}
