#include<iostream>
using namespace std;
int main()
{
    int A,N,sum,i,Result=0;
    while (1)
    {
        cin>>A>>N;
        while(N<0 || N==0)
        {
            cin>>N;
            if(N>0)
            {
                break;
            }
        }
        for(i=0;i<N;i++)
        {
            sum = A;
            sum+=i;
            Result+=sum;
        }
        cout<<Result<<endl;
        break;
    }
    return 0;
}
