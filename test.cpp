#include<iostream>
using namespace std;

int main ()
{
    float basic,hra,da,gross;
    cout<<"Enter the basic salary of an Employee ::\t";
    cin>>basic;

    if (basic < 25000)
    { 
        da = basic * 80/100;
        hra = basic * 20/100;
    }
    else if (basic >= 25000 && basic < 40000)
    { 
        da = basic * 90/100;
        hra = basic * 25/100;
    }
    else if (basic >= 40000)
    { 
        da = basic * 95/100;
        hra = basic * 30/100;
    }

    gross = hra+da+basic;

    cout<<"\n\n\t\t\tBasic Pay           \t\t\t::\t\t\t"<<basic<<endl;
    
    cout<<"\t\t\tDearness Allowance  \t\t\t::\t\t\t"<<da<<endl;
    
    cout<<"\t\t\tHouse Rent Allowance\t\t\t::\t\t\t"<<hra<<endl;
    
    cout<<"\n\t\t\t\t\t\t----------------------------------------------"<<endl;
    
    cout<<"\t\t\t\t\t\t\tGross   ::\t\t\t"<<gross<<endl;
    
    cout<<"\t\t\t\t\t\t----------------------------------------------"<<endl;

    return 0;
}