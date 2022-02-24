#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
int main()
{
    int productcode1,productcode2;
    double unite1,unite2,product1price,product2price,Total;
    cin>>productcode1>>unite1>>product1price;
    cin>>productcode2>>unite2>>product2price;
    Total = unite1*product1price+unite2*product2price;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<Total<<endl;
    return 0;
}

