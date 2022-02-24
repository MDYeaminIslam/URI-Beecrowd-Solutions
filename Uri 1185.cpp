#include<bits/stdc++.h>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double  arr[12][12];
    int i,j;
    int num = 12;
    char test;
    double result=0.0;
    cin>>test;
    for(i=0;i<12;i++)
    {
        for( j=0;j<12;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<11;i++)
    {
        num--;
        for( j=0;j<num;j++)
        {
            result+=arr[i][j];
        }
    }

    if(test=='S')
    {
        cout<<fixed<<setprecision(1)<<result<<endl;
    }
    if(test=='M')
    {
        cout<<fixed<<setprecision(1)<<(result/66.00)<<endl; //66 use cause all the array box didn't use here.
    }

    return 0;
}
