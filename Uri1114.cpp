#include<iostream>
using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        if(num!=2002)
        {
            cout<<"Senha Invalida"<<endl;
        }
        if(num==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
    }
    return 0;
}
