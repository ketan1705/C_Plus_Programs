#include<iostream>
using namespace std;

template <class T>
class Calculator{
	T num1 ,num2;
	public:
	Calculator(T x,T y){
		num1 = x;
		num2 = y;
	}
		void display(){
			cout<<"Square of "<<num1<<" is: "<<square1()<<endl;
			cout<<"Square of "<<num2<<" is: "<<square2()<<endl;
			cout<<"Area is: "<<area()<<endl;
		}
		T square1(){
			return (num1 * num1);
			
		}
		T square2(){
			return (num2 * num2);
			
		}
		T area(){
			return num1 * num2;
		}
};
int main(){
	Calculator<int> d(10,32);
	Calculator<int> c(44,34);
	d.display();
	c.display();
	return 0;
}