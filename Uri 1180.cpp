#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,value,New_value,value1=0,i,j,level=0;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>value;
        arr[i] = value;
    }
    New_value =1000;
    for(i=0;i<N;i++)
    {
        if(arr[i]<New_value)
        {
            New_value = arr[i];
            level = i;
        }
    }
    cout<<"Menor valor: "<<New_value<<"\n"<<"Posicao: "<<level<<endl;
    return 0;

}
