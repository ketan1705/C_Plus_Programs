#include<iostream>
using namespace std;
float area(float r){
 
    float ar=3.14*r*r;
    return ar;

}
float area(float l,float b){
    
    float ar=l*b;
    return ar;
}
int main(){
    
    float l,b,h,r,result,r1;

    cout<<"Enter the radius: ";
    cin>>r;
    result=area(r);
    cout<<"Area of circle is "<<result<<endl;

    cout<<"Enter the length and breadth: ";
    cin>>l>>b;
    r1=area(l,b);
    cout<<"Area of rectangle is "<<r1;

}