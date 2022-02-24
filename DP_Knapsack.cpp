#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val[] = {100,20,20,40};
    int wt[] = {3,2,4,1};
    int item = 4;
    int w = 5;
    int table[item+1][w+1];
    for(int i=0;i<item+1;i++)table[0][i]; //row = 0
    for(int i=0;i<w+1;i++)table[i][0]; // col = 0

    for(int i=1;i<item+1;i++)
    {
        for(int j=1;j<w+1;j++)
        {
            if(wt[i]<=j)
            {
                int p = table[i-1][j];
                int q = val[i]+table[i][j-wt[i]];
                if(p>=q)table[i][j]=p;
                else table[i][j]=q;
            }
            else
            {
                table[i][j] = table [i-1][j];
            }
        }
    }
    cout<<table[item][w]<<endl;

}
