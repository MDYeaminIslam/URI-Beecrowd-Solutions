#include<iostream>
using namespace std;
int main()
{
    int x,y,i,test_case,sum;
    cin>>test_case;
    for(i=1;i<=test_case;i++)
    {
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<endl;
        }
        if(x>y)
        {
            sum=0;
            for(y=y+1;y<x;y++)
            {
                if(y%2!=0)
                {
                    sum=sum+y;
                }
            }
            cout<<sum<<endl;
        }
        if(y>x)
        {
            sum=0;
            for(x=x+1;x<y;x++)
            {
                if(x%2!=0)
                {
                    sum=sum+x;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}

