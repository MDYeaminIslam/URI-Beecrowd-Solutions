#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double storage,val;
    storage = 0;
    val = 0;
    for(i=1;i<=100;i++)
    {
        val = (1.00)/i;
        storage += val;
    }
    cout<<fixed<<setprecision(2)<<storage<<endl;
    return 0;
}

