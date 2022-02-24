#include<iostream>
using namespace std;
int main()
{
    int X,Z,sum,num;
    while(1)
    {
        cin>>X>>Z;
        while(Z<X ||Z==X)
        {
            cin>>Z;
            if(Z>X)
            {
                break;
            }
        }
        sum = X; num=1;
        while(1)
        {
            X++;
            sum += X;
            if(sum<=Z)
            {
                num++;
            }
            if(sum>Z)
            {
                num++;
                break;
            }
        }
        break;
    }
    cout<<num<<endl;
}
