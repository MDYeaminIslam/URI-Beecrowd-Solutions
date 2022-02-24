#include<iostream>
using namespace std;
int main()
{
   int num,i;
   while(cin>>num)
   {
       if(num>0)
       {
           for(i=1;i<=num;i++)
           {
                cout<<" "<<i;
               if(i==num)
               {
                   cout<<endl;
               }
           }
       }
       else
       {
           break;
       }
   }
}

