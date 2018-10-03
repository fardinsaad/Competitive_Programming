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
ll pr[100005];

void djk(point node)
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
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    ll i,j,k,l,m,n,x,y,z;
    cin >> n >> m;
    for(i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        a[x].push_back(y);
        a[y].push_back(x);
        cost[x][y] = cost[y][x] = z;
    }
    for(i = 0; i <=n; i++ ) dis[i] = 1e13;
    dis[1] = 0;
    point get;
    get.name = 1;
    get.val = 0;
    get.pre = 0;
    pq.push(get);
    while(!pq.empty())
    {
        point temp = pq.top();
        if(temp.name == n) break;
        pq.pop();
        djk(temp);
    }
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
    for(i = path.size() - 1; i>= 0; i--)
    {
        cout << path[i] << " " ;
    }
}












