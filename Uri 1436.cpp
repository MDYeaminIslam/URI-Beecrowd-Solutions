#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int num,i,j=1,result,test_case;
    cin>>test_case;
    while(test_case--)
    {
        cin>>num;
        int player_list[num];
        if(num%2!=0)
        {
            for(i=0;i<num;i++)
            {
                cin>>player_list[i];
            }
            result = floor(num/2);
            cout<<"Case "<<j<<": "<<player_list[result]<<endl;
        }
        j++;
    }
    return 0;
}
