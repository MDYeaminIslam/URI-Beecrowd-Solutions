#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,sqr,R1,R2;
    cin>>a>>b>>c;
    sqr = ((b*b) - 4*a*c);

    if(sqr<0 || a==0)
    {
        cout<<"Impossivel cacular"<<endl;
    }
    else
    {
        R1 = (-b + sqrt(sqr))/(2*a); //Always use () to close all the number other wise it would give wrong number.
        R2 = (-b - sqrt(sqr))/(2*a);
        cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
    return 0;
}

