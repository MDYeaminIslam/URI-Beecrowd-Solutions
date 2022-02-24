/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,M,i,j,val;
    while(cin>>N>>M && N!=0 && M!=0)
    {
        val=0;
        long long arr[M];
        for(i=0;i<M;i++)
        {
            cin>>arr[i];
        }
        int n=1;
        for(i=0;i<M;i++)
        {
            for(j=n;j<M;j++)
            {

                if(N==M)
                {
                    if(arr[i]==arr[j])
                    {
                        val++;
                    }
                }
                if(N<M)
                {
                    if(arr[i]==arr[j])
                    {
                        val++;
                    }
                }
            }
            n++;
        }
        cout<<val<<endl;
    }

    return 0;
}
*/

#include <cstdio>
#include <cstring>

int array[10001];

int main()
{
    int n, m, t, counter;

    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        memset(array, 0, sizeof(array));
        counter = 0;

        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &t);
            array[t]++;
            if (array[t] == 2)
                counter++;
        }

        printf("%d\n", counter);
    }

    return 0;
}
