#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,temp;
	cout<<"Enter the number of series: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==1){
			cout<<a<<" ";
			
		}
		if(i==2)
		{
			cout<<" "<<b<<" ";
		}
		
		temp=a;
		a=b;
		b=temp;
		
		cout<<temp<<" ";
		
	}
	
	return 0;
}