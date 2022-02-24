#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    int num;
    double pi = 3.14159,Volume;
    cin>>num;
    Volume = (4.0/3)*pi*num*num*num;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<Volume<<endl;
    return 0;
}
