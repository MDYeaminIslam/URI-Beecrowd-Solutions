#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;
void new_s1(int n)
{
    if(n<=10)
    {
        cout<<s1;
    }
    else
    {
        for(int i=0;i<10;i++)
        {
            cout<<s1[i];
        }
    }
}
void new_s2(int m)
{
    if(m<=10)
    {
        cout<<s2;
    }
    else
    {
        for(int i=0; i<10; i++)
        {
            cout<<s2[i];
        }
    }
}
void new_s3(int o)
{
    if(o<=10)
    {
        cout<<s3;
    }
    else
    {
        for(int i=0; i<10; i++)
        {
            cout<<s3[i];
        }
    }
    cout<<endl;
}
int main()
{
    int i;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    cout<<s1+s2+s3<<endl;
    cout<<s2+s3+s1<<endl;
    cout<<s3+s1+s2<<endl;
    new_s1(s1.length());
    new_s2(s2.length());
    new_s3(s3.length());

}
