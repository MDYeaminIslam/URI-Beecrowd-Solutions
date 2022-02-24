#include<iostream>
using namespace std;
int main()
{
    double num1,num2,num3,temp;
    cin>>num1>>num2>>num3;
    if(num1<num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num1<num3)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num2<num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if(num1>=num2+num3)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    if((num1*num1)==(num2*num2+num3*num3))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if((num1*num1)>(num2*num2+num3*num3))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
   if((num1*num1)<(num2*num2+num3*num3))
   {
       cout<<"TRIANGULO ACUTANGULO"<<endl;
   }
   if(num1==num2 && num2==num3)
   {
       cout<<"TRIANGULO EQUILATERO"<<endl;
   }
   if((num1==num2 && num1!=num3)||(num2==num3 && num2!=num1)||(num1==num3 && num1!=num2))
   {
       cout<<"TRIANGULO ISOSCELES"<<endl;
   }
}
