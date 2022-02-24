#include<iostream>
using namespace std;
int main()
{
    int M,N,sum=0,i;
    while(cin>>M>>N && M>0 && N>0)
    {
        sum=0;
        if(M>N)
        {
          sum=0;
          for(i=N;i<=M;i++)
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
        }
        if(M<N)
        {
            sum=0;
            for(i=M;i<=N;i++)
            {
                sum+=i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }

    }
    return 0;
}
