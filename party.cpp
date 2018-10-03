#include<bits/stdc++.h>
using namespace std;
vector<int>a[2005];
bool vis[2005],vis1[2005];
int mx = 1;
void dfs(int x,int y);
int main()
{
    int i,j,k,l,m,n,cnt = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> m;
        if(m != -1)
            a[i].push_back(m);
    }
    for(i = 1; i <=n; i++)
    {
        memset(vis,0,sizeof(vis));
        dfs(i,1);
    }
    cout << mx << endl;
}
void dfs(int x,int y)
{
    int i,k;
    if(vis[x] == 0)
        vis[x] = 1;
    else return;
    mx = max(mx,y);
    for(i = 0; i < a[x].size();i++)
    {
        k = a[x][i];
        dfs(k,y+1);
    }
}
