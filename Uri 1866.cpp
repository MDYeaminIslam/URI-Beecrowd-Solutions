#include<bits/stdc++.h>
using namespace std;


int main()
{
    long test_case,i,value;
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>value;
        if(value%2==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
    return 0;

}


