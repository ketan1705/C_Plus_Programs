#include<iostream>
using namespace std;
int area(int l,int b){
 
    int c=l+b;
    return c;
}
int area(int r){
    
    int s=3.14 * r * r;
    return s;
}

int area(float a){
    
    int s1=a*a;
    return s1;
}

int main(){
    
    int l,b,r,s11,s12,s13;
    float a;

    cout<<"Enter the numbers: ";
    cin>>l>>b;
    s11=area(l,b);
    cout<<"area is rectangle "<<s11<<endl;

    cout<<"Enter the radius: ";
    cin>>r;
    s12=area(r);
    cout<<"Area of circle is "<<s12<<endl;
    
    cout<<"Enter the side: ";
    cin>>a;
    s13=area(a);
    cout<<"Area of square is: "<<s13;

    return 0;

}