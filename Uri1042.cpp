#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,a,b,c,temp;
    cin>>a>>b>>c;
    num1=a; num2=b; num3=c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<endl;
    cout<<num1<<'\n'<<num2<<'\n'<<num3<<endl;
    return 0;
}
