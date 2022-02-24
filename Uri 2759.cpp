#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char arr[3];
    int i;
    for(i=0;i<=2;i++)
    {
        cin>>arr[i];
    }
    i=0;
    cout<<"A = "<<arr[i]<<", "<<"B = "<<arr[i+1]<<", "<<"C = "<<arr[i+2]<<endl;
    cout<<"A = "<<arr[i+1]<<", "<<"B = "<<arr[i+2]<<", "<<"C = "<<arr[i]<<endl;
    cout<<"A = "<<arr[i+2]<<", "<<"B = "<<arr[i]<<", "<<"C = "<<arr[i+1]<<endl;

    return 0;
}


