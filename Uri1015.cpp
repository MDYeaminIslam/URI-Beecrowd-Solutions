#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,x1,y1,x2,y2,Distance;
    cin>>x1>>y1>>x2>>y2;
    x = x2-x1; y = y2-y1;
    Distance = sqrt((x*x)+(y*y));
    cout<<fixed<<setprecision(4)<<Distance<<endl;
    return 0;
}
