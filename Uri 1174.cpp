#include<bits/stdc++.h>
using namespace std;
int main()
{
    double value,arr[100];
    int i;
    for(i=0;i<100;i++)
    {
        cin>>value;
        arr[i]=value;
    }
    for(i=0;i<100;i++)
    {
        if(arr[i]<=10)
        {
            cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<arr[i]<<endl;
        }
    }
    return 0;
}
