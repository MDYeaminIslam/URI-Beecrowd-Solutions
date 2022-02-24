#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    float Grade1,Grade2,Grade3,TotalResult; //initializing values
    cin >> Grade1>>Grade2>>Grade3; //grades of students
    TotalResult = (Grade1*2+Grade2*3+Grade3*5)/10; //Total average of these students numbers
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<TotalResult<<endl;
    return 0;

}
