#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    int num=0,i;
    getline(cin,line);

    for(i=0;i<line.length();i++)
    {
        if(line[i]=='1')
        {
            num++;
        }
    }
    if(num ==0 || num%2==0)
    {
        line+='0';
        cout<<line<<endl;
    }
    else
    {
        line+='1';
        cout<<line<<endl;
    }
    return 0;
}
