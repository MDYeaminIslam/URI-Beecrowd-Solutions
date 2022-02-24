
#include<iostream>
using namespace std;
int main()
{
    int i,value=1,N;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cout<<value<<" "<<(value*value)<<" "<<(value*value*value)<<endl;
        cout<<value<<" "<<(value*value)+1<<" "<<(value*value*value)+1<<endl;
        value+=1;

    }
    return 0;
}

