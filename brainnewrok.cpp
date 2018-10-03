#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int pre);
bool vis[1001],l,f;
int n,m;
vector<int>edge[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int x,y,i,j,k;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    dfs(1,-1);
    for(i = 1; i <= n; i++)
    {
        if(vis[i] == 0) f = 1;
    }
    if(l == 1 || f == 1)cout<<"no"<<endl;
    else cout<<"yes"<<endl;

}
void dfs(int node,int pre)
{
    if(vis[node] == 1)
    {
        l = 1;
        return;
    }
    vis[node] = 1;
    for(int i = 0; i < edge[node].size();i++)
    {
        int x = edge[node][i];
        if(x == pre)continue;
        dfs(x,node);
    }
}
