#include <iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if((C>=0 && D>=0)&&(B>C && D>A)&&(A%2==0)&&((C+D)>(A+B)))
    {
       cout<<"Valores aceitos"<<endl;
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }
}
