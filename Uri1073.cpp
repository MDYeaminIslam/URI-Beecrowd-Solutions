#include<iostream>
using namespace std;
int main()
{
    long number;
    int i;
    cin>>number;
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        {
            cout<<i<<"^2 = "<<i*i<<endl;
        }
    }
    return 0;
}
