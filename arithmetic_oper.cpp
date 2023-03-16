#include<iostream>
using namespace std;
int main()
{

    double num1,num2,result;
    char op;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
	cout<<"Enter the operator: ";
    cin>>op;
   
    cout<<endl;

    switch (op)
    {
    case '+':
        result=num1+num2;
        cout<<"The sum of two number is "<<result;
        break;
    case '-':
        result=num1-num2;
        cout<<"The subtract of two number is "<<result;
        break;
    case '*':
        result=num1*num2;
        cout<<"The sum of two number is "<<result;
        break;
    case '/':
        result=num1/num2;
        cout<<"The sum of two number is "<<result;
        break;
    
    default:
        cout<<"Invalid input! Please enter valid input";
    }
}

