#include<iostream>
using namespace std;
int main()
{
    int j,k,i;
    for(i=1;i<=9;i+=2)
    {
        for(j=1,k=7;j<=3,k>=5;j++,k--)
        {
            cout<<"I="<<i<<" J="<<k<<endl;
        }
    }
    return 0;
}
