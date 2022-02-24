#include<iostream>
using namespace std;
int main()
{
    int line,line1,number,num1,new_number=1,i,j;
    cin>>line>>number;
    num1 = number/line;
    line1 = line;
    for(i=1;i<=num1;i++)
    {
        cout<<new_number;
        {
            for(j=new_number+1;j<=line1;j++)
            {
                cout<<" "<<j;
            }
            cout<<endl;
            new_number+=line;
            line1+=line;
        }
    }
    return 0;
}
