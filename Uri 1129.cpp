#include<bits/stdc++.h>
using namespace std;
int main()
{
    int index,i,j,value,countV,test;
    while(cin>>test && test!=0)
    {
        for(i=0;i<test;i++)
        {
            countV=0;
            for(j=0; j<5; j++)
            {
                cin>>value;
                if(value<=127)
                {
                    countV++;
                    index=j;
                }
            }
            if(countV==1)
            {
                if(index==0)
                {
                    cout<<"A"<<endl;
                }
                if(index==1)
                {
                    cout<<"B"<<endl;
                }
                if(index==2)
                {
                    cout<<"C"<<endl;
                }
                if(index==3)
                {
                    cout<<"D"<<endl;
                }
                if(index==4)
                {
                    cout<<"E"<<endl;
                }
            }
            else
            {
                cout<<"*"<<endl;
            }
        }

    }
}
