#include<iostream>
using namespace std;
int main()
{
    int i,num;
    int arr[46];
    cin>>num;
    arr[0] = 0;
    arr[1] = 1;
    cout<<arr[0]<<" "<<arr[1]<<" ";

    for(i=2;i<num;i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        if(i==(num-1))
        {
            cout<<arr[i];
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
