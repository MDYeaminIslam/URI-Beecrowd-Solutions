#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    double c,d;
    cin>>a>>b>>c>>d;
    cout<<fixed<<setprecision(6)<<"A = "<<a<<", "<<"B = "<<b<<endl;
    cout<<fixed<<setprecision(6)<<"C = "<<c<<", "<<"D = "<<d<<endl;
    cout<<fixed<<setprecision(1)<<"A = "<<a<<", "<<"B = "<<b<<endl;
    cout<<fixed<<setprecision(1)<<"C = "<<c<<", "<<"D = "<<d<<endl;
    cout<<fixed<<setprecision(2)<<"A = "<<a<<", "<<"B = "<<b<<endl;
    cout<<fixed<<setprecision(2)<<"C = "<<c<<", "<<"D = "<<d<<endl;
    cout<<fixed<<setprecision(3)<<"A = "<<a<<", "<<"B = "<<b<<endl;
    cout<<fixed<<setprecision(3)<<"C = "<<c<<", "<<"D = "<<d<<endl;
    printf("A = %.3E, B = %.3E\n",a,b);    //Here E works as a scientific notation //cout<<fixed<<setprecision(3)<<"A = "<<std::scientific<<a<<", "<<"B = "<<std::scientific<<b<<endl;
    printf("C = %.3E, D = %.3E\n",c,d);                               //cout<<fixed<<setprecision(3)<<"C = "<<std::scientific<<c<<", "<<"D = "<<std::scientific<<d<<endl;
    cout<<fixed<<setprecision(0)<<"A = "<<a<<", "<<"B = "<<b<<endl;
    cout<<fixed<<setprecision(0)<<"C = "<<c<<", "<<"D = "<<d<<endl;

    return 0;
}

