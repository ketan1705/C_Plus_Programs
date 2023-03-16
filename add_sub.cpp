#include<iostream>
using namespace std;
class add{
int a,b,c;
public:
add(){
cout<<" Enter two values for addition \n ";
cin>>a>>b;
if( a == 0 ){
c = b;
}
else if( b== 0){
c = a;
}
else{
c = a + b;
}
cout<<" The Sum is: "<<c;
}
};
class Sub{
int x,y,z;
public:
Sub(){
cout<<"\n Enter two values for Subtraction \n ";
cin>>x>>y;
if( x == 0 ){
z = y;
}
else if( y == 0){
z = x;
}
else if( x < y ){
z = y - x;
}
else if (y < x){
z = x - y;
}
else {
cout<<"\n Invalid Values";
}
cout<<" The subtraction is : "<<z;
}
};
int main(){
add a;
Sub s;
return 0;
}