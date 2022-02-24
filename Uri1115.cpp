#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    while(cin>>num1>>num2 && num1!=0 && num2!=0)
    {
        if(num1>0 && num2>0)
        {
            cout<<"primeiro"<<endl;
        }
        if(num1<0 && num2>0)
        {
            cout<<"segundo"<<endl;
        }
        if(num1<0 && num2<0)
        {
            cout<<"terceiro"<<endl;
        }
        if(num1>0 && num2<0)
        {
            cout<<"quarto"<<endl;
        }
    }
    return 0;
}

