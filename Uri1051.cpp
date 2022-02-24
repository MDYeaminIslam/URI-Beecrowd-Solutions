#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    double salary,Taxes;
    cin>>salary;
    if(salary>=0.00 && salary<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(salary>2000.00 && salary<=3000.00)
    {
        Taxes = (salary-2000.00)*0.08;
        cout<<"R$ "<<fixed<<setprecision(2)<<Taxes<<endl;
    }
    else if(salary>3000.00 && salary<=4500.00)
    {
        Taxes = ((salary-3000.00)*0.18)+(1000.00*0.08);
        cout<<"R$ "<<fixed<<setprecision(2)<<Taxes<<endl;
    }
    else if(salary>4500)
    {
        Taxes = ((salary-4500.00)*0.28)+(1500.00*0.18)+(1000.00*0.08);
        cout<<"R$ "<<fixed<<setprecision(2)<<Taxes<<endl;
    }
    return 0;
}
