#include<bits/stdc++.h>
using namespace std;

#define ll long long

string st;
ll dp[65][65];

ll wyas(int i,int j)
{
    if(i > j) return 0;
    if(i == j)return 1;
    if(dp[i][j] != -1)
        return dp[i][j];
    if(st[i] == st[j])
        return dp[i][j] = 1 + wyas(i+1,j) + wyas(i,j-1);
    else
        return dp[i][j] = wyas(i+1,j) + wyas(i,j-1) - wyas(i+1,j-1);

}
int main()
{
    int x,y,t;
    cin >> t;
    for(x = 1; x <= t; x++)
    {
        cin >> st;
        memset(dp,-1,sizeof(dp));
        y = st.size() - 1;
        cout << "Case "<<x<<": "<<wyas(0,y) << "\n";
    }
}
