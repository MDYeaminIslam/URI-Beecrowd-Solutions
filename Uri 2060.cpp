#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,value,i,two=0,three=0,four=0,five=0;
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>value;
        if(value%2==0)
        {
            two++;
        }
        if(value%3==0)
        {
            three++;
        }
        if(value%4==0)
        {
            four++;
        }
        if(value%5==0)
        {
            five++;
        }
    }
    cout<<two<<" Multiplo(s) de 2"<<endl;
    cout<<three<<" Multiplo(s) de 3"<<endl;
    cout<<four<<" Multiplo(s) de 4"<<endl;
    cout<<five<<" Multiplo(s) de 5"<<endl;

}
