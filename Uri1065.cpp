#include<iostream>
using namespace std;
int main()
{
    int i,arr[6],number=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            number++;
        }
    }
    cout<<number<<" valores pares"<<endl;
    return 0;
}
