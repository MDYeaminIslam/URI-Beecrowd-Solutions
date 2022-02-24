#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double salary,final_salary,increment;
    int R_rate;
    cin>>salary;
    if(salary>=0 && salary<=400.00)
    {
        increment = ((salary*15)/100);
        final_salary = (salary+increment);
        R_rate = 15;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<final_salary<<'\n'<<"Reajuste ganho: "<<increment<<'\n'<<"Em percentual: "<<R_rate<<" %"<<endl;
    }
    else if(salary>400.00 && salary<=800.00)
    {
        increment = ((salary*12)/100);
        final_salary = salary+increment;
        R_rate = 12;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<final_salary<<'\n'<<"Reajuste ganho: "<<increment<<'\n'<<"Em percentual: "<<R_rate<<" %"<<endl;
    }
    else if(salary>800.00 && salary<=1200.00)
    {
        increment = ((salary*10)/100);
        final_salary = salary+increment;
        R_rate = 10;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<final_salary<<'\n'<<"Reajuste ganho: "<<increment<<'\n'<<"Em percentual: "<<R_rate<<" %"<<endl;
    }
    else if(salary>1200.00 && salary<=2000.00)
    {
       increment = ((salary*7)/100);
        final_salary = salary+increment;
        R_rate = 7;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<final_salary<<'\n'<<"Reajuste ganho: "<<increment<<'\n'<<"Em percentual: "<<R_rate<<" %"<<endl;
    }
    else if(salary>2000.00)
    {
        increment = ((salary*4)/100);
        final_salary = salary+increment;
        R_rate = 4;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<final_salary<<'\n'<<"Reajuste ganho: "<<increment<<'\n'<<"Em percentual: "<<R_rate<<" %"<<endl;
    }

    return 0;

}

