#include<iostream>
using namespace std;
int main()
{
    double a[6];
    int i,number=0;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            number++;
        }
    }
    cout<<number<<" valores positivos"<<endl;
    return 0;

}
