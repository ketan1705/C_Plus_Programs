#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter the nummber: ";
	cin>>n;
	for(j=2;j<n;j++)
	{
		int flag=1;
	
	for(i=2;i<=j/2;i++)
	{
		if(j%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<j<<" ";
	}
}
	return 0;
}


