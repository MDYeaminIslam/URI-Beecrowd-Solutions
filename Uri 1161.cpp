#include<bits/stdc++.h>


unsigned long long factorial1(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial1(n - 1);
}

unsigned long long factorial2(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial2(n - 1);
}
int main()
{
    long long value1,value2;
    while(std::cin>>value1>>value2)
    {
        std::cout<<factorial1(value1)+factorial2(value2)<<std::endl;
    }
    return 0;

}
