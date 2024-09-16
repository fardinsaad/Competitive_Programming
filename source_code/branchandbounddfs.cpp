#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct point{
   ll name,val,pre;
   bool operator<(const point &a) const
   {
       return a.val < val;
   }
};
vector<ll>a[100005];
priority_queue<point>pq;
map<ll,ll>cost[100005];
ll dis[100005];
const ll INF = 0x3f3f3f3f;
ll pr[100005],n,des1,des2;

void dfs(point node)
{
    ll now = node.name;
    for(ll i = 0; i < a[now].size();i++)
    {
        ll x = a[now][i];
        if(dis[now] + cost[now][x] < dis[x])
        {
            pr[x] = node.name;
            dis[x] = dis[now] + cost[now][x];
            point get;
            get.name = x;
            get.val = dis[x];
            get.pre = node.name;
            pq.push(get);
        }
    }
        point temp = pq.top();
        if(temp.name == des1)
        {
            n = des1;
            return;
        }
        if(temp.name == des2)
        {
            n = des2;
            return;
        }
        pq.pop();
        dfs(temp);
}

int main()
{
    ios_base::sync_with_stdio(0);
    ll i,j,k,l,m,x,y,z,src;
    cout << "Enter no of nodes and edges..\n";
    cin >> n >> m;
    for(i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        a[x].push_back(y);
        cost[x][y] = z;
    }
    cout << "Enter source and destinations..\n";
    cin>>src>>des1>>des2;
    for(i = 0; i <=n; i++ ) dis[i] = 1e13;
    dis[1] = 0;
    point get;
    get.name = 1;
    get.val = 0;
    get.pre = 0;
    pq.push(get);
    dfs(get);
    if(dis[n] == 1e13)
    {
        cout << -1 <<endl;
        return 0;
    }
    vector<ll>path;
    while(1)
    {
        path.push_back(n);
        n = pr[n];
        if(n == 0) break;
    }
   // reverse(path);
   cout << "The optimal path for reaching the destination is..\n";
    for(i = path.size() - 1; i>= 0; i--)
    {
        cout << path[i] << " " ;
    }
}

