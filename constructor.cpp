/*#include<iostream>
using namespace std;
class Area{
    int length,width;
    public:
    Area(int len,int wid){
        length=len;
        width=wid;
        cout<<"Area="<<length*width;
    }
};
int main(){
    int l,b;
    cout<<"Enter the sides:";
    cin>>l>>b;
    Area obj(l,b);
    return 0;
}*/

#include<iostream>
using namespace std;
class BCA{
    public:
    static int a;
    BCA(){
        a++;
    }
	void display(){
		
        cout<<"count="<<a;
	}
};
int BCA::a=0;
int main(){
    BCA obj,obj2,obj3,obj4;
	obj.display();
    return 0;
}







