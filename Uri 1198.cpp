
#include<bits/stdc++.h>

int main()
{
    long long value1,value2,result;
    while(std::cin>>value1>>value2) //Only std::cin and std::cout makes differecnce in result
    {
        if(value1>=value2)
        {
            std::cout<<value1-value2<<std::endl;
        }
        else
        {
            std::cout<<value2-value1<<std::endl;
        }

    }
    return 0;
}
