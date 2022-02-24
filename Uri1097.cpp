#include<iostream>
using namespace std;
int main()
{
    int j,k=7,i;
    for(i=1;i<=9;i+=2)
    {
        cout<<"I="<<i<<" J="<<k<<endl;
        cout<<"I="<<i<<" J="<<k-1<<endl;
        cout<<"I="<<i<<" J="<<k-2<<endl;
        k+=2;
    }
    return 0;
}

