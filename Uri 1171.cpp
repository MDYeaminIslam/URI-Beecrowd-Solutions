#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,value,i,counter[2001];
    for(i=0;i<=2000;i++)
    {
        counter[i] = 0;
    }
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>value;
        counter[value]++;
    }
    for(i=1;i<=2000;i++)
    {
        if(counter[i]>0)
        {
            cout<<i<<" aparece "<<counter[i]<<" vez(es)"<<endl;
        }
    }
    return 0;
}
