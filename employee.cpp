#include<iostream>
using namespace std;
class BCA{
    char emp_name[50],emp_designation[50];
    int emp_id;
    float emp_salary;
    public:
    void intial(){
        cout<<"\nEnter the name: ";
        cin>>emp_name;
        cout<<"\nEnter the designation: ";
        cin>>emp_designation;
        cout<<"\nEnter the id: ";
        cin>>emp_id;
    }
    void calc(){
        int P,L;
        emp_salary=50000;
        cout<<"\nEnter the day you work: ";
        cin>>P;
        cout<<"\nEnter the day you take leave:";
        cin>>L;
        if(L==0){
            
            cout<<"\nYour salary is  "<<emp_salary;
        }
        else
        {
            emp_salary=emp_salary-(100*L);
            cout<<"\nYour salary is:"<<emp_salary;
        }
        
    }
    void display(){
        cout<<"\n-------------------";
        cout<<"\nYour account name is "<<emp_name;
        cout<<"\nYour designation is "<<emp_designation;
        cout<<"\nYour id is "<<emp_id;
        cout<<"\nYour salary is "<<emp_salary;
    }

};
int main(){
    BCA b;
    char c;
    int ch;
    b.intial();
    do{
        cout<<"\n1. Calculate Salary \n2. Display \n3. Exit";
        cout<<"\nEnter the choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        b.calc();
            break;

        case 2:
        b.display();
            break;
        
        case 3:
		exit(0);
        }


    cout<<"\nWould you like to continue: ";
    cin>>c;
    }
    while(c=='y'||c=='Y');
	return 0;
}