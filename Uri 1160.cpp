#include<bits/stdc++.h>
using namespace std;
int main()
{
    long PA,PB;
    int test_case,i,count_val;
    double R1,R2,G1,G2;
    cin>>test_case;
    for(i=1;i<=test_case;i++)
    {
        cin>>PA>>PB>>G1>>G2;
        count_val = 0;
        while(!(PA>PB))
        {
            PA +=((PA*G1)/(100.00));
            PB +=((PB*G2)/(100.00));
            count_val++;
        }
        if(count_val>100)
        {
            printf("Mais de 1 seculo.");
            printf("\n");
        }
        else
        {
            printf("%d anos",count_val);
            printf("\n");
        }
    }
    return 0;
}
