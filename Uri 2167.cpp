#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i,j,value,test_case,index;
    cin>>test_case;
    long arr[test_case];
    for(i=0;i<test_case;i++)
    {
        cin>>arr[i];
    }
    bool x = true;

    for(i=0;i<test_case-1;i++)
    {
      if(arr[i+1]<arr[i])
      {
          x = false;
          cout<<i+2<<endl;
          break;
      }
    }
    if(x)
    {
        cout<<0<<endl;
    }

    return 0;
}

