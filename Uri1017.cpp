#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double timespent,averagespeed,fuelneeded,mileage;
    cin>>timespent>>averagespeed;
    mileage = 12.0; //12 km/l
    fuelneeded = (timespent*averagespeed)/mileage;
    cout<<fixed<<setprecision(3)<<fuelneeded<<endl;

    return 0;
}

