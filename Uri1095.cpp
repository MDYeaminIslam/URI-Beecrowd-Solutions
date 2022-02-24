#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    for(j=60;j>=0;j--)
    {
        cout<<"I="<<i<<" J="<<j<<endl;
        i+=3; j-=4;
    }

    return 0;
}

