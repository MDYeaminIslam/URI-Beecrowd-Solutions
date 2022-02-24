#include<iostream>
#include<iomanip> //Both "iomanip" & "limits" used for setprecision() function.
#include<limits>
using namespace std;
int main()
{
    double pi=3.14159,Radius,Area;
    cin>>Radius;
    Area=(Radius*Radius)*pi;
    cout<<"A="<<fixed<<setprecision(4)<<Area<<endl;


    return 0;
}
