#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,Inter=0,Gremio=0,grenais=0,Draw=0;
    while(cin>>num1>>num2)
    {

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        if(num1>num2)
        {
            Inter++;
        }
        if(num1<num2)
        {
            Gremio++;
        }
        if(num1==num2)
        {
            Draw++;
        }
        grenais++;
        cin>>num3;
        if(num3!=1)
        {
            break;
        }

    }
    if(Inter>Gremio)
    {
        cout<<grenais<<" grenais"<<'\n'<<"Inter:"<<Inter<<'\n'<<"Gremio:"<<Gremio<<'\n'<<"Empates:"<<Draw<<'\n'<<"Inter venceu mais"<<endl;
    }
    if(Inter<Gremio)
    {
        cout<<grenais<<" grenais"<<'\n'<<"Inter:"<<Inter<<'\n'<<"Gremio:"<<Gremio<<'\n'<<"Empates:"<<Draw<<'\n'<<"Gremio venceu mais"<<endl;
    }
    if(Inter==Gremio)
    {
        cout<<grenais<<" grenais"<<'\n'<<"Inter:"<<Inter<<'\n'<<"Gremio:"<<Gremio<<'\n'<<"Empates:"<<Draw<<'\n'<<"Não houve vencedor"<<endl;
    }
}
