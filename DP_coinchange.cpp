#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[3] = {1,2,3};
    int x,y;
    int n=3;
    int amt = 5;
    int table [3+1][5+1]'
    for(int i = 0;i<amt;i++)table [1][i]=1;
    for(i=1;i<n;i++)
    {
        for(j=0;i<amt;j++)
        {
            if(j==0)x=0;
            else x=table[i-1][j];

            if(i-coin[j]>=0)y=table[i-coin[j]][j];
            else y=0;
            table[i][j]=x+y;
        }
    }


}

