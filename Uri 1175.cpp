#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value,arr[20];
    int i,j;
    for(i=0,j=19;i<20;i++,j--)
    {
        cin>>value;
        arr[j]=value;
    }
    for(i=0,j=0;i<20;i++,j++)
    {

        cout<<"N["<<i<<"] = "<<arr[j]<<endl;

    }
    return 0;
}

