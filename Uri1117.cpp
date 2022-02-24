#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    float avgerage,num1,arr[3];
    int j=0;
    while(1)
    {
        cin>>num1;
        if(num1>=0.0 && num1<=10.0)
        {
            arr[j]=num1;
            j++;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
        if(j>1)
        {
            break;
        }
    }
    avgerage = (arr[0]+arr[1])/(2.0);
    cout<<fixed<<setprecision(2)<<"media = "<<avgerage<<endl;
    return 0;
}
