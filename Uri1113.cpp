#include<iostream>
using namespace std;
int main()
{
    int X,Y;
    while(cin>>X>>Y && X!=Y)
    {
        if(X>Y)
        {
            cout<<"Decrescente"<<endl;
        }
        if(X<Y)
        {
            cout<<"Crescente"<<endl;
        }
    }
    return 0;
}
