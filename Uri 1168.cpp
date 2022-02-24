#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    long long countV,test,i,j;
    char value[1111];
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>value;
        countV=0;
       for(j=0;j<strlen(value);j++)
        {
            if(value[j]=='1')
            {
                countV+=2;
            }
            if(value[j]=='7')
            {
                countV+=3;
            }
            if(value[j]=='4')
            {
                countV+=4;
            }
            if(value[j]=='2' ||value[j]=='3' || value[j]=='5')
            {
                countV+=5;
            }
            if(value[j]=='0' || value[j]=='6' || value[j]=='9')
            {
                countV+=6;
            }
            if(value[j]=='8')
            {
                countV+=7;
            }
        }
        cout<<countV<<" leds"<<endl;
    }
    return 0;

}
