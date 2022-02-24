#include<bits/stdc++.h>
using namespace std;
int main()
{
    char i,value;
    int j=0;
    cin>>value;
    for(i='A';i<='Z';i++)
    {
        j++;
        if(value==i)
        {
            break;
        }
    }
    cout<<j<<endl;
    return 0;
}

