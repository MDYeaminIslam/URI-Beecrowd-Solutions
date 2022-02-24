#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,group,secret_value,i,value;
    cin>>test_case;
    while(test_case!=0)
    {
        cin>>group>>secret_value;
        int arr[group];
        for(i=0;i<group;i++)
        {
            int value;
            cin>>value;
            if(secret_value>value)
            {
                arr[i]=secret_value-value;
            }
            else
            {
                arr[i]=value-secret_value;
            }
        }

        int low=arr[0];

        for(i=1;i<group;i++)
        {
            if(low>arr[i])
            {
                low=arr[i];

            }
        }
        int r;
        for(int i=0;i<group;i++)
        {
            if(low==arr[i]){
                r=i;
                break;
            }
        }
        cout<<r+1<<endl;

        test_case--;
    }

}
