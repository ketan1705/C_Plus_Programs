#include<iostream>
using namespace std;
void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping the two values is:";
	cout<<a<<endl<<b;

	
}


int main()
{
	int a,b;
	cout<<"Enter the numbers:";
	cin>>a>>b;
	swap(a,b);
	
return 0;	
}