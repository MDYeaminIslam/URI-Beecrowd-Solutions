#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[4]={'F','O','U','R'};
    char b[3]={'F','O','R'};
    int table[4+1][3+1];

    for(int i=0;i<4;i++)table[0][i]=0;
    for(int i=0;i<4;i++)table[i][0]=0;

    for(int i=1;i<4+1;i++)
    {
        for(int j=0,k=0;j<3+1;i++,k++)
        {
            if(a[i]==b[j])table[i][j] = table[i-1][j-1]+1;
            else
            {
                table[i][j] = max(table[i-1][j],table[i][j-1]);
            }
        }
    }



}


