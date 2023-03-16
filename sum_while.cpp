#include<iostream>
using namespace std;
int main()
{
    int i,a,sum=0;
    cout<<"Enter the value";
    cin>>a;

    do{

        sum=sum+i;
        i++;
        
    }
    while (i<=a);
 
    cout<<sum;
}