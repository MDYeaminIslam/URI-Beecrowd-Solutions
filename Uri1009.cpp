#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
int main()
{
    string name; double fixedsalary,monthlysale,totalsalary;
    cin>> name >> fixedsalary >> monthlysale;
    totalsalary = (fixedsalary + (monthlysale*0.15));
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<totalsalary<<endl;
    return 0;
}
