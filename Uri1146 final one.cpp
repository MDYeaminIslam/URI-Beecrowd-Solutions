#include<iostream>
using namespace std;
int main()
{
    int value,i;
    while(1)
    {
        cin>>value;
        if(value==0)
        {
            break;
        }
        else
        {
            cout<<"1";
            for(i=2;i<=value;i++)
            {
                cout<<" "<<i;
            }
            cout<<endl;
        }
    }
    return 0;
}

