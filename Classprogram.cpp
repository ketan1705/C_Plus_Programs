#include<iostream>
using namespace std;
class geeks{
	public:
	string geekname;

void printname(){
	cout<<"Geekname is: "<<geekname;
}
};

int main(){
	geeks obj1;
	obj1.geekname="Abhi";
	obj1.printname();
	return 0;
}