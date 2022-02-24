//Uri:1079 Weighted Averages
#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    double test_case,num1,num2,num3,Total;
    int i,j;
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>num1>>num2>>num3;
        Total = ((num1*2)+(num2*3)+(num3*5))/(10.0);
        cout<<fixed<<setprecision(1)<<Total<<endl;
    }
    return 0;
}
