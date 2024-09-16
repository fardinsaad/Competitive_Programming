#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);
#define Max 100
ll a[Max][Max],vis[Max][Max],n,m,tot[Max][Max],mn = 1000;
vector<ll>p;

void dfs(ll x,ll y,ll xx,ll yy,ll cnt,ll kk)
{
    if(xx >= n or yy>= m or xx < 0 or yy < 0) return;
  //  if(vis[xx][yy] == 1)return;
    //vis[xx][yy] = 1;
    if(xx == x and yy == y)
    {
        if(tot[x][y] < cnt)
            tot[x][y] = cnt;
        kk = kk - 2;
        if(kk < 0) return;
        xx = kk-1;
        yy = kk;
    }
    dfs(x,y,xx+1,yy+2,cnt+1,kk);
    dfs(x,y,xx+1,yy-2,cnt+1,kk);
    dfs(x,y,xx-1,yy+2,cnt+1,kk);
    dfs(x,y,xx-1,yy-2,cnt+1,kk);
    dfs(x,y,xx+2,yy+1,cnt+1,kk);
    dfs(x,y,xx+2,yy-1,cnt+1,kk);
    dfs(x,y,xx-2,yy+1,cnt+1,kk);
    dfs(x,y,xx-2,yy-1,cnt+1,kk);
}

int main()
{
    ll i,j,k,l,t;
    cin >> t;
    for(ll tc = 1; tc <= t; tc++)
    {
        cin >> n >> m;
        memset(a,0,sizeof(a));
        memset(tot,1000,sizeof(tot));
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if(a[i][j] >= 1 and a[i][j] <= 9)
                   {
                       p.push_back(i);
                       p.push_back(j);
                   }
            }
        }
        k = p.size();
        for(i = 0; i < n; i++)
        {
            mn = 1000;
            for(j = 0; j < m; j++)
            {
                dfs(i,j,p[k - 2],p[k - 1],0,k-1);
                if(mn > tot[i][j])
                    mn = tot[i][j];
            }
        }
        if(mn == 1000)
            cout << -1 <<endl;
        else
            cout << mn << endl;
    }
}
