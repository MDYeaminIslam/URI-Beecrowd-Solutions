#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double num1,num2,num3,num4,Average1,Average2,new_num;
    cin>>num1>>num2>>num3>>num4;
    Average1 = (num1*2+num2*3+num3*4+num4)/(10.0);
    cout<<"Media : "<<fixed<<setprecision(1)<<Average1<<endl;
    if(Average1>=7.0)
    {
        cout<<"Aluno aprovado"<<endl;
    }
    else if(Average1>=5.0 && Average1<=6.9)
    {
        cout<<"Aluno em emaxe"<<endl;
        cin>>new_num;
        cout<<"Nota de exame: "<<fixed<<setprecision(1)<<new_num<<endl;
        Average2 = (Average1+new_num)/(2.0);
        if(Average2>=5.00)
        {
            cout<<"Aluno aprovado"<<endl;
        }
        if(Average2<=4.9)
        {
            cout<<"Aluno reprovado"<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<Average2<<endl;

    }
    else
    {
        cout<<"Aluno reprovado"<<endl;
    }
}
