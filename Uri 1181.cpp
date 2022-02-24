#include<bits/stdc++.h>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double  arr[12][12];
    long i,j,row_num;
    char test;
    double result=0.0;
    cin>>row_num>>test;
    long k= row_num;
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
        for(k =row_num;k<row_num+1;k++)
        {
            for(j=0;j<12;j++)
            {
                result+=arr[k][j];
            }
        }
        cout<<fixed<<setprecision(1)<<result<<endl;
    }
    else
    {
        for(k = row_num;k<row_num+1;k++)
        {
            for(j=0;j<12;j++)
            {
                result+=arr[k][j];
            }
        }
        cout<<fixed<<setprecision(1)<<result/12<<endl;
    }

    return 0;
}
