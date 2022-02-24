#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,test,p1,p2,first=0,second=0;
    while(1)
    {
        cin>>test;
        if(test==0)
        {
            break;
        }
        for(i=0;i<test;i++)
        {
            cin>>p1>>p2;
            if(p1>p2)
            {
                first++;
            }
            else if(p1<p2)
            {
                second++;
            }
            else
            {
                first;
                second;
            }
        }
        cout<<first<<" "<<second<<endl;
        first =0;
        second=0;
    }
    return 0;

}
