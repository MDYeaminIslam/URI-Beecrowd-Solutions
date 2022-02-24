#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,val,test_case;
    float value;
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>value;
        val=0;
        while(1)
        {
            val++;
            value/=2;

            if(value<=1)
            {
                break;
            }

        }
        cout<<val<<" dias"<<endl;
    }

    return 0;
}
