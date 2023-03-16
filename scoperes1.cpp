#include<iostream>
using namespace std;
int m=5;
int main(void){
/*	int my_var=0;
	::my_var=1;
	my_var=2;
	cout<<::my_var<<","<<my_var;
	return 0;*/
	int m=15;
	cout<<"Value of m is "<<m<<"\n";
	cout<<"Value of global ::m is "<<::m<<"\n";
	return 0;
}