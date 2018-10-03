#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[100][100];

ll ncr(ll n, ll r)
{
    if(r == 1) return n;
    if(r == n) return 1;
    if(dp[n][r] != -1) return dp[n][r];
    else
        return dp[n][r] = ncr(n-1, r-1) + ncr(n-1, r);
}
 int main()
 {
     ll x,y;
     cin >> x >> y;
     memset(dp,-1,sizeof(dp));
     cout << ncr(x,y);
 }
