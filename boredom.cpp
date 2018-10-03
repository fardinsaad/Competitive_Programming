#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll dp[100005],a[100005],mx;

ll knap(ll x)
{
    if(x > mx) return 0;
    if(dp[x] != -1) return dp[x];
    ll s1,s2,s;
    s1 = knap(x+1);
    s2 = x * a[x] + knap(x+2);
    s = max(s1,s2);
    return dp[x] = s;
}

int main()
{
    ll i,j,k,l,n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a[k]++;
        mx = max(mx,k);
    }
    cout << knap(1);
}
