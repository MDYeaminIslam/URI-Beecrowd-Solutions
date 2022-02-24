#include<bits/stdc++.h>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    std::string line;
    int value;
    std::cin>>value;
    while(value--)
    {
        cin>>line;
        double result = line.size()*0.01;
        cout<<fixed<<setprecision(2)<<result<<endl;

    }
    return 0;
}

