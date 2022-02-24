#include<iostream>
using namespace std;
int main()
{
    int i,number;
    cin>>number;
    for(i=1;i<=10000;i++)
    {
        if(i%number==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

