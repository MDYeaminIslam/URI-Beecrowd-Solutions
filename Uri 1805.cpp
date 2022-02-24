#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long Sum=0;
    long long A,B;
    cin>>A>>B;
    if(1<=A<=B<=1000000000)
    {
        for(long long i=A;i<=B;i++)
        {
            Sum+=i;
        }
        cout<<Sum<<endl;
    }
    return 0;
}
