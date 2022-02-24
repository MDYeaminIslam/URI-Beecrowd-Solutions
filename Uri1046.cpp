#include<iostream>
using namespace std;
int main()
{
    int num1,num2,hours;
    cin>>num1>>num2;
    if(num1==num2)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(num1<num2)
    {
        hours = num2-num1;
        cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;
    }
    else if(num1>num2)
    {
        hours = (num2+24)-num1;
        cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;
    }
    return 0;
}
