#include <bits/stdc++.h>
using namespace std;
int main()
{
    double i,j;
    double storage;
    storage = 1;
    i= 1.00; j=1.00;
    while(i<=39)
    {
        i+=2.00;
        j*=2.00;
        storage += ((i)/(j));
    }

    cout<<fixed<<setprecision(2)<<storage<<endl;
    return 0;
}


