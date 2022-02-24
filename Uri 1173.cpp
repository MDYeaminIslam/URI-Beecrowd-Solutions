#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[10]; int i=0;
    long long value,sum;
    cin>>value;
    sum =1;
    arr[i]=value;
    sum=value;
    for(i=1;i<10;i++)
    {
        sum *= 2;
        arr[i]=sum;;

    }
    for(i=0;i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}


