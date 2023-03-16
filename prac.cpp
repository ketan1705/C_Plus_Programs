/*#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0){
	return (x+y+z+w);
}
int main(){
	cout<<sum(10,15)<<endl;
	cout<<sum(10,15,25)<<endl;
	cout<<sum(10,15,25,30)<<endl;
	
	return 0;
}*/
/*
#include <iostream>

    using namespace std;

    int main()

    {

        int i;

        enum month 

        {

            JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC

        };

        for (i = MAR; i <= NOV; i++)

            cout << i;

        return 0;

    }*/
/*
#include <iostream>

 using namespace std;

  

int fun(int=0, int = 0);

  

int main()

 {

   cout << fun(5);

   return 0;

 }

 int fun(int x, int y) { return (x+y); }*/

/*
 #include<iostream>
using namespace std;
inline int area(int a){
	int c = a*a*a;
    return c;

	
}
int main(){
	int a;
	cout<<"enter the number: ";
	cin>>a;
	cout<<"Cube is: "<<area(a);
return 0;	
}*/
/*
#include<iostream>
using namespace std;
class point{
    int a1,b1;
    public:
    point(int a,int b){
        a1=a;
        b1=b;
        
    }
    point(point &c){
        a1=c.a1;
        b1=c.b1;
    }
    int getX(){
        return a1;
    }
    int getY(){
        return b1;
    }
};
int main(){
    point p1(10,15);
    point p2=p1;
    cout<<"p1.x="<<p1.getX()<<",p1.y="<<p1.getY();
    cout<<"\np2.x="<<p2.getX()<<",p2.y="<<p2.getY();
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class abc{
    public:
    abc(){
        cout<<"Constructor is called"<<endl;
    }
    ~abc(){
        cout<<"Destructor is called"<<endl;
    }
    void display(){
        cout<<"Hello World!"<<endl;
    }
};
int main(){
    abc obj;
    obj.display();
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *yx=&x;
    int **yyx=&yx;
    cout<< x <<endl<< *yx <<endl<< **yyx<<endl<< yx<<endl<<*yyx<<endl;
    
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int x=25;
    int *y = &x;
    int **z = &y;
    int ***t = &z;
    cout<<"Value of x:\n"<< x <<endl<< *y <<endl<<&x<<endl<< **z <<endl<<&y<<endl<< ***t <<endl<< y <<endl<< *z <<endl<< **t <<endl<< *t;
    
    return 0;
}*/

/*
#include<iostream>
using namespace std;
static int b=0;
void d(int *x,int *y=&b){
	cout<<*x<<" "<<*y;
}
int main(){
	int a=10,b=20;
	d(&a,&b);
	return 0;
}*/
/*
#include<iostream>
using namespace std;
class A{
    public:
    int length = 12;
    int breadth = 30;
};
class B:public A{
    public:
	
	};
int main(){
    B obj;
    cout<<"Lenght:"<<obj.length;
    cout<<"Breadth:"<<obj.breadth;
    cout<<"Area:"<<obj.Area;
    return 0;
}*/
/*
#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   float salary = 60000;   
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;    
   };       
int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  
*/
/*
#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
	void fun(){
		cout<<"Enter the numbers:";
		cin>>x>>y;
	}
};
class B : public A{
	public:
	void sum(){
		cout<<"The sum is:"<<x+y<<endl;
	}
	
};
class C: public A{
	public:
	void Area(){
		cout<<"The Area is:"<<x*y<<endl;
	}
};
int main(){
	B obj;
	C obj1;
	obj.fun();
	obj.sum();
	obj1.fun();
	obj1.Area();
	return 0;
}*/

/*main()
	
{
}*/

#include<stdio.h>

main() 
{
   for()printf("Hello");
}