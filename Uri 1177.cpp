#include<bits/stdc++.h>
using namespace std;
int main()
{
    long arr[1000],i,j=0,value;;
    cin>>value;
    for(i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(value==j) j=0;
    }

    return 0;
}
