#include<iostream>

using namespace std;
int main()
{
	int n,factorial=1,i=1;
	cout<<"Enter the value:";
	cin>>n;
	while (i<=n)
	{
		factorial=factorial*i;
		i++;
	}
	cout<<"Factorial="<<factorial;
	return 0;
}