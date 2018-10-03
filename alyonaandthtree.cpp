#include<bits/stdc++.h>
using namespace std;
vector < pair<int,int> > v[150000];
bool vis[200000];
int a[150000],cnt = 0;
void dfs(int node,int dis)
{
    int _dis,y;
    if(dis > a[node]) return;
        cnt++;
    for(int ii = 0; ii < v[node].size(); ii++)
    {
        y = v[node][ii].first;
       _dis = max((dis + v[node][ii].second), 0);
        dfs(y,_dis);
    }
}
int main()
{
    int i,j,k,l,m,n,x,w;
    cin >> n;
    a[0] = 0;
    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(i = 1; i < n; i++)
    {
        cin >> x >> w;
        v[x].push_back(make_pair(i + 1,w));
       // v[i+1].push_back(make_pair(x,w));
    }
    dfs(1,0);
    cout << n - cnt << endl;
}
