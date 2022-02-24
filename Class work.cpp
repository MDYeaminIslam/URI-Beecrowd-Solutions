#include<iostream>
using namespace std;
void display(int);
int main()
{
    int n;
    cin>>n;
    int dis(n);
    return 0;
}
void dis(int n)
{
    if(n)
        dis(n-1);
    else
        return;

    cout<<n<<endl;
}
