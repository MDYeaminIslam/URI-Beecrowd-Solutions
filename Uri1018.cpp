#include <iostream>

using namespace std;
int main()
{
    long notes;
    int hundred,fifty,twenty,ten,five,two,one;
    cin>>notes;
    hundred = notes/100;
    notes%=100;
    fifty = notes/50;
    notes %=50;
    twenty = notes/20;
    notes%=20;
    ten = notes/10;
    notes%=10;
    five = notes/5;
    notes%=5;
    two = notes/2;
    notes%=2;
    one = notes/1;
    cout<<hundred <<" nota(s) de R$ 100,00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50,00"<<endl;
    cout<<twenty <<" nota(s) de R$ 20,00"<<endl;
    cout<<ten <<" nota(s) de R$ 10,00"<<endl;
    cout<<five <<" nota(s) de R$ 5,00"<<endl;
    cout<<two <<" nota(s) de R$ 2,00"<<endl;
    cout<<one <<" nota(s) de R$ 1,00"<<endl;
    return 0;
}

