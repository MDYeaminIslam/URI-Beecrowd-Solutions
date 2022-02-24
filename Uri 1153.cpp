#include<iostream>
using namespace std;

int fac(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return (num*fac(num-1));
    }
}
int main()
{
    int num,result;
    cin>>num;
    result = fac(num);
    cout<<result<<endl;

    return 0;
}

