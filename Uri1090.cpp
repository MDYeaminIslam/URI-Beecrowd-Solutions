#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    int i,total=0,test_case,num;
    char name;
    double coelho=0,rato=0,sapo=0,p1,p2,p3;
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>num>>name;
        total += num;
        if(name=='C')
        {
            coelho+=num;
        }
        else if(name=='R')
        {
            rato+=num;
        }
        else if(name=='S')
        {
            sapo+=num;
        }
    }
    p1 = (coelho/total)*(100.00);
    p2 = (rato/total)*(100.00);
    p3 = (sapo/total)*(100.00);
    cout<<"Total: "<<total<<" cobaias"<<'\n'<<"Total de coelhos: "<<coelho<<'\n'<<"Total de ratos: "<<rato<<'\n'<<"Total de sapos: "<<sapo<<'\n'<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<p1<<" %"<<'\n'<<
    "Percentual de ratos: "<<p2<<" %"<<'\n'<<"Percentual de sapos: "<<p3<<" %"<<endl;
    return 0;
}

