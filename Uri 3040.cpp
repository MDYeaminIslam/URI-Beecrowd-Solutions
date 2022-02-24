#include<bits/stdc++.h>
using namespace std;
int main()
{
    long tall,thickness,branches,test_case;
    cin>>test_case;
    while(test_case!=0)
    {
        cin>>tall>>thickness>>branches;
        if(tall>=200 && tall<=300 && thickness>=50 && branches>=150)
        {
            cout<<"Sim"<<endl;
        }
        else
        {
            cout<<"Nao"<<endl;
        }

        test_case--;
    }
    return 0;
}
