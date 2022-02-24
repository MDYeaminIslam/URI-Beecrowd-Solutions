#include<iostream>
using namespace std;
int main()
{
    int start_hour,start_minute,final_hour,final_minute,duration;
    cin>>start_hour>>start_minute>>final_hour>>final_minute;
    duration = (final_hour*60+final_minute)-(start_hour*60+start_minute);
    if(duration<=0)
    {
        duration+=(60*24);
    }
    cout<<"O JOGO DUROU "<<duration/60 <<" HORA(S) E "<<duration%60 <<" MINUTO(S)"<<endl;
    return 0;

}
