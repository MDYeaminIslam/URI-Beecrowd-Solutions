#include <iostream>
using namespace std;
int main()
{
    double number;
    cin>>number;
    if(number>= 0.00 && number <= 25)
    {
        cout<<" Intervalo [0,25]" <<endl;
    }
    else if(number >25.00 && number <=50.00)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(number>50.00 && number<=75.00)
    {
        cout<<"Intervalo (50,75]" <<endl;
    }
    else if(number>75.00 && number<=100.00)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }
    else
    {
        cout<<"Fora the intervalo"<<endl;
    }
    return 0;
}
