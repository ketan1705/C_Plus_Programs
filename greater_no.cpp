/*#include<iostream>
using namespace std;
inline int great(int x,int y){
    if(x<y){
        return y;
    }
    else{
        return x;
    }
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<great(a,b)<<" is a greater number";
    return 0;
}*/
/*
#include<iostream>
using namespace std;
inline int great(int x,int y){
    int z = (x>y) ? x : y;
    return z;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<great(a,b)<<" is a greater number";
    return 0;
}*/

//01.42
//01.60
//01.40

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    if(a<b){
        cout<<b;
    }
    else{
        cout<<a;
    }
    return 0;
}