#include<iostream>
using namespace std;
int main()
{
    int x,i,j=0;
    cin>>x;
    for(i=x;i<=x+12;i++)
    {
        if(i%2!=0 && j<6)
        {
            cout<<i<<endl;
            j++;
        }
    }
    return 0;
}
