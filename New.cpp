#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    void dis(n);
    return 0;
}
void dis(int num)
{
    if(num)
        dis(num-1)
    else
        return;

    cout<<num<<endl;
}
