#include<iostream>
using namespace std;
inline int area(int r){
	
	return 3.14*r*r;
}
int main(){
	int a;
	cout<<"enter the radius: ";
	cin>>a;
	cout<<"Area of circle is: "<<area(a);
return 0;	
}