#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,s[100],i,j,k,flag1,flag2,flag3,sum;
    cin>>t;
    while( t-- )
    {
        cin>>n;
        flag1 = 0,flag2 = 0,flag3 = 1,sum = 0;
        for(i = 0; i < n; i++)
        {
            cin>>s[i];
            if(s[i] == 5) flag1 = 1;
            else if(s[i] == 2) flag3 = 0;
            sum = sum +s[i];
        }
        if(sum >= n * 4) flag2 = 1;
        if(flag1 && flag2 && flag3) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
