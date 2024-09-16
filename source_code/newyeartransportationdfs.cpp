#include<bits/stdc++.h>
using namespace std;
bool vis[400000],y;
vector<int>edge[400000];
int dfs(int node);
int n,t;
int main()
{
    int i,j,k,l,m,s = 1;
    cin>>n>>t;
    for(i = 1; i < n; i++)
    {
        cin>>m;
        if(i != s) continue;
        edge[s].push_back(s+m);
        s = s+m;
    }
    dfs(1);
    if(y == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int dfs(int node)
{
    int i,j,k,x;
    //if(vis[node] == 1) return;
    vis[node] = 1;
    if(vis[t] == 1) { y = 1; return y; }

    for(i = 0; i < edge[node].size(); i++)
    {
        x = edge[node][i];
        dfs(x);
    }
}
