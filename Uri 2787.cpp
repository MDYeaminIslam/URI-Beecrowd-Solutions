#include<bits/stdc++.h>
using namespace std;
int main()
{
    int L_row,C_collum;
    cin>>L_row>>C_collum;
    if(L_row%2!=0 && C_collum%2==0)
    {
        cout<<"0"<<endl;
    }
    if(L_row%2!=0 && C_collum%2!=0)
    {
        cout<<"1"<<endl;
    }
    if(L_row%2==0 && C_collum%2==0)
    {
        cout<<"1"<<endl;
    }
    if(L_row%2==0 && C_collum%2!=0)
    {
        cout<<"0"<<endl;
    }
    return 0;
}


