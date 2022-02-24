#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    int product_code,quantity;
    cin>>product_code>>quantity;
    switch(product_code)
    {
    case 1:
        double Total_price1 = 4.00*quantity;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<Total_price1<<endl;
        break;
    case 2:

        double Total_price2 = 4.50*quantity;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<Total_price2<<endl;
        break;
    case 3:

        double Total_price3 = 5.00*quantity;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<Total_price3<<endl;
        break;
    case 4:

        double Total_price4 = 2.00*quantity;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<Total_price4<<endl;
        break;
    case 5:

        double Total_price5 = 1.50*quantity;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<Total_price5<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;
}
