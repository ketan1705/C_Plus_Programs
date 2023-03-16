#include<iostream>
using namespace std;
class student{
	int id;
	string name;
	public:
	student(int student_id,string student_name){
		id = student_id;
		name = student_name;
	}
	void display(){
		cout<<"Student id: "<<id<<"\tStudent name: "<<name<<endl;
	}
};
int main(){
	student obj(12,"abhi");
	student obj1(123,"raj");
	obj.display();
	obj1.display();
	return 0;
}