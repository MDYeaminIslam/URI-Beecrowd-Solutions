#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    double arr[7],sum=0;
    int number=0,i;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            sum+=arr[i];
            number++;
        }
    }
    double fi = ((sum)/number);
    cout<<number<<" valores positivos"<<fixed<<setprecision(1)<<'\n'<<fi<<endl;
    return 0;
}
