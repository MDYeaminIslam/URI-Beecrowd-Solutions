#include<iostream>
using namespace std;
int main()
{
    int value1,Alcohol=0,Gasoline=0,Diesel=0;
    while(cin>>value1 && value1>0)
    {
        if(value1==1)
        {
            Alcohol++;
        }
        if(value1==2)
        {
            Gasoline++;
        }
        if(value1==3)
        {
            Diesel++;
        }
        if(value1==4)
        {
            break;
        }
    }
    cout<<"MUITO OBRIGADO"<<'\n'<<"Alcool: "<<Alcohol<<'\n'<<"Gasolina: "<<Gasoline<<'\n'<<"Diesel: "<<Diesel<<endl;
    return 0;
}
