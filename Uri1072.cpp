
#include<iostream>
using namespace std;
int main()
{
    long N,arr[10000];
    int i,num=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]>=10 && arr[i]<=20)
        {
            num++;
        }
    }
    cout<<num<<" in"<<'\n'<<(N-num)<<" out"<<endl;
    return 0;
}
