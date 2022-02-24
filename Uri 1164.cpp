#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,test_case,value,count_val,sum;
    cin>>test_case;
    count_val =0;
    while(count_val < test_case)
    {
        cin>>value;
        sum=0;
        for(i=1;i<value;i++)
        {
            if(value%i==0)
            {
                sum+=i;
            }
            if(sum>value)
                break;
        }
        if(sum==value)
        {
            cout<<value<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<value<<" nao eh perfeito"<<endl;
        }
        count_val++;
    }
    return 0;
}
