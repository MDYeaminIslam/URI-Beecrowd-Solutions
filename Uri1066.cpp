#include<iostream>
using namespace std;
int main()
{
    int i,arr[6],E1=0,O1=0,P=0,N=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            E1++;
        }
        if(arr[i]%2!=0)
        {
            O1++;
        }
        if(arr[i]>0)
        {
            P++;
        }
        if(arr[i]<0)
        {
            N++;
        }
    }
    cout<<E1<<" valor(es) par(es)"<<'\n'<<O1<<" valor(es) impar(es)"<<'\n'<<P<<" valor(es) positivo(s)"<<'\n'<<N<<" valor(es) negativo(s)"<<endl;
    return 0;
}

