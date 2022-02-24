#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int arr[5],c=0,d=0,i;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<4;i++)
    {
        if(arr[i+1]>arr[i])
        {
            c++;
        }
        if(arr[i]>arr[i+1])
        {
            d++;
        }
    }
    if(c==4)
    {
        cout<<"C"<<endl;
    }
    else if(d==4)
    {
        cout<<"D"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
    return 0;
}

