#include<iostream>
using namespace std;
int main()
{
    float j,i;
    for(i=0;i<=2.2;i+=0.2)
    {
        for(j=1;j<=3;j++)
        {
            cout<<"I="<<i<<" J="<<j+i<<endl;
        }
    }
    return 0;
}
