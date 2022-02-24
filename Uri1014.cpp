#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    float total_distance_traveled,total_fuel_spent,fuel_average_consumption;

    cin>>total_distance_traveled>>total_fuel_spent;
    fuel_average_consumption = total_distance_traveled/total_fuel_spent;
    cout<<fixed<<setprecision(3)<<fuel_average_consumption<<" km/l"<<endl;
    return 0;

    return 0;
}

