/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,i;
    float value;
    float arr;
    while(scanf("%d",test) != EOF)
    {

        value = 12.00;
        while(test--)
        {
            cin>>arr;
            if(value>arr)
            {
                value = arr;
            }
        }
    }
    cout<<fixed<<setprecision(2)<<value<<endl;
    return 0;

}
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<bits/stdc++.h>

using namespace std;
#define all(v) v.begin(),v.end()

typedef long long ll;
int main()
{
	int t;
	double n;
	while(cin>>t)
	{
		double less=12.00;
		while(t--){
			cin>>n;
			if(n<less)less=n;
		}
		printf("%.2lf\n",less);
	}
    return 0;
}
