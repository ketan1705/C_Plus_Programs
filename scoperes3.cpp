#include<iostream>
using namespace std;
class GFG{
	
	public:
		static int i;
};
int GFG::i=1;
int main()
{	
	GFG obj1;
	
	cout<<obj1.i;
	
return 0;
	
}