#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    double grade1,grade2,Media;
    cin>> grade1>>grade2;
    Media = (grade1*3.5 + grade2*7.5)/11; //grade1 has weight 3.5 that's why multiply with that.same
                                        //same case goes to grade2.Devide by 11(3.5+7.5) because we have to find out average.
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<Media<<endl;
    return 0;
}
