#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
float salarycalculation(float workinghour,float paymentperhour) //Employee salary info
{
    float totalmoney = workinghour*paymentperhour;
    return totalmoney;
}
int main()
{
    int employeesnumber; float workinghour,paymentperhour;
    cin>> employeesnumber>> workinghour >> paymentperhour;
    float totalmoney = salarycalculation(workinghour,paymentperhour);
    cout <<"NUMBER = "<<employeesnumber<<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<totalmoney<<endl;
    return 0;

}
