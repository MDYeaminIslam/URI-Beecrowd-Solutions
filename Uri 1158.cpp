#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,X,Y,value,sum,i;
    cin>>test_case;
    for(i=1;i<=test_case;i++)
    {
        cin>>X>>Y;
        if(X%2==0)
        {
            X+=1;
            value = 1;
            sum=0;
            while(value<=Y)
            {
                sum+=X;
                X+=2;
                value++;
            }
            cout<<sum<<endl;
        }
        else
        {
            value = 1;
            sum=0;
            while(value<=Y)
            {
                sum+=X;
                X+=2;
                value++;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}



