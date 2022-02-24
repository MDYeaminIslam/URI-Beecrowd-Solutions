#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,X,Y,value,sum,i;

    while(cin>>X && X!=0)
    {

        if(X%2==0)
        {
            value = 1;
            sum=0;
            while(value<=5)
            {
                sum+=X;
                X+=2;
                value++;
            }
            cout<<sum<<endl;
        }
        else
        {
            X+=1;
            value = 1;
            sum=0;
            while(value<=5)
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





