#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double num1,num2,num3,Area,Perimeter;
    cin>>num1>>num2>>num3;
    if(num1+num2>num3 && num1+num3>num2 && num2+num3>num1)
    {
        Perimeter = num1+num2+num3;
        cout<<"Perimeter = "<<fixed<<setprecision(1)<<Perimeter<<endl;
    }
    else
    {
        Area = (0.5*(num1+num2)*num3);
        cout<<"Area = "<<fixed<<setprecision(1)<<Area<<endl;
    }
}
