#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    int Avg = 0;
    double val = 0.00;
    while(1)
    {
        cin>>age;
        if(age<0)
        {
            break;
        }
        Avg+=age;
        val++;
    }
    cout<<fixed<<setprecision(2)<<Avg/val<<endl;
    return 0;

}


