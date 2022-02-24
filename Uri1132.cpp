#include<iostream>
using namespace std;
int main()
{
    int X,Y,i,Sum=0;
    cin>>X>>Y;
    if(X<Y)
    {
        for(i=X;i<=Y;i++)
        {
            if(i%13!=0)
            {
                Sum+=i;
            }
        }
        cout<<Sum<<endl;
    }
    if(X>Y)
    {
        for(i=Y;i<=X;i++)
        {
            if(i%13!=0)
            {
                Sum+=i;
            }
        }
        cout<<Sum<<endl;
    }
}
