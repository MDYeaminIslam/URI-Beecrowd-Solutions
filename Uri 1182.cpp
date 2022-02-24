#include<bits/stdc++.h>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double  arr[12][12];
    int i,j,col_num;
    char test;
    double result=0.0;
    cin>>col_num>>test;
    int k = col_num;
    for(i=0;i<12;i++)
    {
        for( j=0;j<12;j++)
        {
            int value;
            arr[i][j] =0.0;
        }
    }
    for(i=0;i<12;i++)
    {
        for( j=0;j<12;j++)
        {
            int value;
            cin>>arr[i][j];
        }
    }
    if(test=='S')
    {
        for(i=0;i<12;i++)
        {
            result+=arr[i][col_num];
        }
        cout<<fixed<<setprecision(1)<<result<<endl;
    }
    else
    {
        for(i=0;i<12;i++)
        {
            result+=arr[i][col_num];
        }
        cout<<fixed<<setprecision(1)<<result/12<<endl;
    }

    return 0;
}

