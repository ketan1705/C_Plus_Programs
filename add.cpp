#include<iostream>
using namespace std;
class add
{
	private:

		int a,b,c;
	
	public:
		void getdata()
		{
			cout<<"enter the values of a & b:";
			cin>>a>>b;
		}
		void cal()
		{
			c = a + b;
		
		}
		
		void display()
		{
			cout<<"the sum of the values is="<<c;
		}
	
};

int main()
{
	add a1;
	a1.getdata();
	a1.cal();
	a1.display();
	return 0;
}