#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,test_case,value,count_val,sum;
    int arr[2];
    cin>>test_case;
    count_val =0;
    while(count_val < test_case)
    {
        cin>>value;
        sum=0;
        int val=0;
        for(i=1;i<=value;i++)
        {
            if(value%i==0 || i==1 || i==value)
            {
                val++;
            }
        }
        if(val==2)
        {
            cout<<value<<" eh primo"<<endl;
        }
        else
        {
            cout<<value<<" nao eh primo"<<endl;
        }
        count_val++;
    }
    return 0;
}

