#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D,Time,hours = 0,minutes = 0;
    cin>>A>>B>>C>>D;
    if(A==B && C==D)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if(A<=C)
    {
        Time = ((C*60)+D)-((A*60)+B);
        if(Time<=60)
        {
            hours = 0;
            minutes = Time;
            cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
        }
        else
        {
            hours = Time / 60;
            minutes = Time % 60;
            cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
        }
    }
    else if(A>=C)
    {
        Time = (((C+24)*60)+D)-((A*60)+B);
        if(Time<=60)
        {
            hours = 0;
            minutes = Time;
            cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
        }
        else
        {
            hours = Time/60;
            minutes = Time%60;
            cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
        }
    }
    return 0;
}

