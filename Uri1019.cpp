#include <iostream>

using namespace std;
int main()
{
    long time;
    int hours,minutes,seconds;
    cin>>time;
    hours = time/3600;
    time%=3600;
    minutes = time/60;
    time%=60;
    seconds = time;
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}

