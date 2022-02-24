#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],i,value;
    for(i=0;i<10;i++)
    {
        cin>>value;
        if(value<0 || value==0)
        {
            value=1;
        }
        arr[i]=value;
    }
    for(i=0;i<10;i++)
    {
        cout<<"X["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}
