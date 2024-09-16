#include<bits/stdc++.h>
using namespace std;

#define sz  100055
vector<int>a[sz];
bool vis[sz];
int dis[sz];

int main()
{
    ios_base::sync_with_stdio(0);
    int i,j,k,l,m,n,t,s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        s = n;
        for(i = 0 ; i <= n; i++)
        {
            a[i].clear();
        }
        memset(vis,0,sizeof(vis));
        while(n--)
        {
            cin >> i >> l;
            while(l--)
            {
                cin >> k;
                a[i].push_back(k);
            }
        }
        cin >> i >> j;
        queue<int>Q;
        Q.push(i);
        dis[i] = 0;
        vis[i] = 1;
        while(!Q.empty())
        {
            int top = Q.front();
            Q.pop();
            for(l = 0 ; l < a[top].size(); l++)
            {
                if(vis[a[top][l]] == 0)
                {
                    Q.push(a[top][l]);
                    vis[a[top][l]] = 1;
                    dis[a[top][l]] = dis[top] + 1;
                    if(a[top][l] == j)
                    {
                        goto so;
                    }
                }
            }
        }
        so:

               cout << i <<" "<< j <<" "<< dis[j] - 1<<"\n";
               cout<<"\n";
    }

}
