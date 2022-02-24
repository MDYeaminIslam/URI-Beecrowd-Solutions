#include<bits/stdc++.h>
using namespace std;
int main()
{
    long arr[100],i;
    double value;
    cin>>value;
    for(i=0;i<100;i++)
    {
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<value<<endl;
        value/=2;

    }

    return 0;
}

