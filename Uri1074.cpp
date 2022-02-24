#include<iostream>
using namespace std;
int main()
{
    long number;
    int i,a;
    cin>>number;
    for(i=0;i<number;i++)
    {
        cin>>a;
        if(a%2==0 && a>0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        if(a%2==0 && a<0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        if(a==0)
        {
            cout<<"NULL"<<endl;
        }
        if(a%2!=0 && a>0)
        {
            cout<<"ODD POSITIVE"<<endl;
        }
        if(a%2!=0 && a<0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
    }
    return 0;
}

