#include<bits/stdc++.h>
using namespace std;

long long int cnt,cnt1;
vector<long long int>a[20001];
int vis[20001],col[20001];
void bfs(long long int node)
{
    queue<long long int>q;
    long long int i,j,k,l,m,n;
    q.push(node);
    vis[node] = 2;
    while(!q.empty())
    {
        n = q.front();
       // cout << "Front " <<n <<endl;
        if(col[n] == 0) cnt++;
        else cnt1++;
        q.pop();
        for(i = 0; i < a[n].size(); i++)
        {
            k = a[n][i];
            if(vis[k] == 1){
            if(col[n] == 0)
                col[k] = 1;
            else
                col[k] = 0;
            q.push(k);
           // cout << "Pushed " <<k <<endl;
            vis[k] = 2;
            }
        }
      //  cout << "cnt " << cnt << " cnt1 " <<cnt1 <<endl;

    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    long long int i,j,k,l = 1,t,m,n,x,y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < 20001 ;i++)
            {
                a[i].clear();
                col[i] = 0;
            }

        for(i = 0; i < n; i++)
        {
            cin >> x >> y;
            vis[x] = 1;
            vis[y] = 1;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        long long int ans = 0;
        cnt = 0;
        cnt1 = 0;
        for(i = 1; i < 20001; i++)
        {
            if(vis[i] == 1)
            {
                bfs(i);
            }
                ans = ans + max(cnt,cnt1);
                cnt = 0;
                cnt1 = 0;
        }
        cout << "Case "<<l <<": "<< ans << endl;
        l++;
    }
}
