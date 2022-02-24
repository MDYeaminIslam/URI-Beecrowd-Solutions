#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,index=0;
    long arr[110];
    for(i=1;i<=100;i++)
    {
        cin>>arr[i];
        if(sum<arr[i])
        {
            sum = arr[i];
            index = i;
        }
    }
    cout<<sum<<'\n'<<index<<endl;
    return 0;
}
