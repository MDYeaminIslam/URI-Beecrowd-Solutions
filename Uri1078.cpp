//Uri:1078 Multiplication table
#include<iostream>
using namespace std;
int main()
{
    int i,number;
    cin>>number;
    for(i=1;i<=10;i++)
    {
        cout<<i<<" x "<<number<<" = "<<i*number<<endl;
    }
    return 0;
}

