#include<iostream>
using namespace std;
int main()
{
    int i,j,N,value=1,num;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cout<<value<<" "<<value+1<<" "<<value+2<<" "<<"PUM"<<endl;
        value+=4;

    }
    return 0;
}

