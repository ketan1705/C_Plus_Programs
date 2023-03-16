#include<iostream>
using namespace std;
class BCA{
    char name[50],acc_type[20];
    int acc_number;
    float balance;
    public:
    void intial(){
        cout<<"\nEnter the name: ";
        cin>>name;
        cout<<"\nEnter the account number: ";
        cin>>acc_number;
        cout<<"\nEnter the account type: ";
        cin>>acc_type;
        cout<<"\nEnter the balance: ";
        cin>>balance;
    }
    void deposit()
    {
        float amount;
        cout<<"\nEnter the amount for deposit: ";
        cin>>amount;
        balance+=amount;
        cout<<"Your amount will be deposited. Your amount is "<<balance;
    }
    void withdraw(){
        float amount1;
        cout<<"\nEnter the amount for withdraw: ";
        cin>>amount1;
        if((balance-amount1)>=200){
            balance-=amount1;
            cout<<"\nYou withdraw "<<amount1<<" from your account";
        }
        else
        {
            cout<<"\nYour account has not sufficient amount for withdraw.";
        }
        
    }
    void display(){
        cout<<"\n-------------------";
        cout<<"\nYour account name is "<<name;
        cout<<"\nYour account number is "<<acc_number;
        cout<<"\nYour account type is "<<acc_type;
        cout<<"\nYour account balance is "<<balance;
    }

};
int main(){
    BCA b;
    char c;
    int ch;
    b.intial();
    do{
        cout<<"\n1. Deposit \n2. Withdraw \n3. Display \n4. Exit";
        cout<<"\nEnter the choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        b.deposit();
            break;
        
        case 2:
        b.withdraw();
            break;
        
        case 3:
        b.display();
            break;
        
        case 4:
		exit(0);
        }


    cout<<"\nWould you like to continue: ";
    cin>>c;
    }
    while(c=='y'||c=='Y');
	return 0;
}