#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool vis[200000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    ll i,j,t,k,l,m,n,cnt,p,flag;
    cin >> t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        cnt = 0;
        flag = 0;
        cin >> n >> k;
        for(i = 1; i <= n; i++)
        {
            cin >> m;
            for(j = 1; j <= m; j++)
            {
                cin >> p;
                if(vis[p] == 0)
                {
                    vis[p] = 1;
                    cnt++;
                }
            }
            if(cnt == k && i != n)
            {
                flag = 1;
            }
        }
        if(cnt == k && flag == 1)
        {
            cout << "some\n";
        }
        else if(cnt == k)
        {
            cout << "all\n";
        }
        else
            cout << "sad\n";
    }
}
