#include<iostream>
using namespace std;
int main(){
	int n,remain,reverse=0,t;
	cout<<"Enter a number:";
	cin>>n;
	t=n;
	while(n!=0){
		remain=n%10;
		reverse=reverse*10+remain;
		n=n/10;
	
	}
	if(t==reverse){
		cout<<"Number is pallindrom";
	}
	else{
		cout<<"Nummber is not a pallindrom";
	}
}