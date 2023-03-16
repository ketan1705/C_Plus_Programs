#include <iostream>
using namespace std;

class binary{
	int a,b;
   public:

    void input() {
        cout << "Enter the values";
        cin >> a;
        cin >> b;
    }

    binary operator + (binary obj) {
        binary temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }

    void display() {
		cout<<a<<"+"<<b<<"i"<<"\n";
    }
};

int main() {
    binary x,y,result;

    cout << "Enter first number:\n";
    x.input();

    cout << "Enter second number:\n";
    y.input();
	result = x + y;
    result.output();

    return 0;
}