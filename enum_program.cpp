#include<iostream>
using namespace std;
enum day { monday=1,tuesday,wednesday,thursday,friday,saturday,sunday};
day convert(string str){
    if(str=="monday") return monday;
    else if(str=="tuesday") return tuesday;
    else if (str=="wednesday") return wednesday;
    else if(str=="Thursday") return thursday;
    else if(str=="Friday") return friday;
    else if(str=="Saturday") return saturday;
    else if(str=="Sunday") return sunday;
    
}    
int main()
{
    day d;
    string today;
    cout<<"\nEnter the day: ";
    cin>>today;
    d=convert(today);

    switch (d)
    {
    case 1:
        cout<<"\n It is a week day";
        break;
    
    case 2:
        cout<<"\n It is a week day";
        break;
    
    case 3:
        cout<<"\n It is a week day";
        break;
    
    case 4:
        cout<<"\n It is a week day";
        break;
    
    case 5:
        cout<<"\n It is a week day";
        break;
    
    case 6:
        cout<<"\n It is a week end";
        break;
    
    case 7:
        cout<<"\n It is a week end";
        break;
    
    default:
        cout<<"\n Wrong input";
    }
    return 0;
}