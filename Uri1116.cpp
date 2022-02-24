#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    double X,Y,result;
    int i,test_case;
    cin>>test_case;
    for(i=1;i<=test_case;i++)
    {
        cin>>X>>Y;
        if(Y==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            result=(X/Y);
            cout<<fixed<<setprecision(1)<<result<<endl;
        }
    }
    return 0;
}
