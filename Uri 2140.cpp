
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long price,paid_price,returnMoney=0,r1=0,result;
    while(cin>>price>>paid_price  && price!=0 && paid_price!=0)
    {
        returnMoney = ((paid_price) - (price));

        if(returnMoney>=100)
        {
            r1++;
            returnMoney-=100;
        }
        if(returnMoney>=50 && returnMoney<100)
        {
            r1++;
            returnMoney-=50;

        }
        if(returnMoney>=20 && returnMoney<50)
        {
            r1++;
            returnMoney-=20;

        }
        if(returnMoney>=10 && returnMoney<20)
        {
            r1++;
            returnMoney-=10;


        }
        if(returnMoney>=5 && returnMoney<10)
        {
            r1++;
            returnMoney-=5;


        }
        if(returnMoney>=2 && returnMoney<5)
        {
            r1++;
            returnMoney-=2;

        }

        if(r1==2 && returnMoney==0)
        {
            cout<<"possible"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }


        returnMoney=0;
        r1=0;
    }

    return 0;
}



/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,diff,count=0;
    cin>>a>>b;
    while(a!=0&&b!=0)
    {
        diff=b-a;
        if(diff>=100)
        {
            diff-=100;
            count++;
        }
         if(diff>=50&&diff<100)
            {
                count++;
                diff-=50;
            }
            if(diff>=20&&diff<50)
            {
                count++;
                diff-=20;
            }
            if(diff>=10&&diff<20)
            {
                count++;
                diff-=10;
            }
            if(diff>=5&&diff<10)
            {
                count++;
                diff-=5;
            }
            if(diff>=2&&diff<5)
            {
                count++;
                diff-=2;
            }
        if(count==2&&diff==0)
            cout<<"possible";
        else
            cout<<"impossible";
        cin>>a>>b;
        count=0;
    }
}
*/
