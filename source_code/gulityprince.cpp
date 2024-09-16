#include<bits/stdc++.h>
using namespace std;

string a[1000];
bool vis[22][22];
int n,m,cnt;
void dfs(int x,int y)
{
   // cout << "1@" <<endl;
   // cout << "x "<<x <<" y "<<y <<
    if(x < 0 || y < 0 || x >= n || y >= m || vis[x][y] == 1 || a[x][y] == '#') return;
   // cout << "2@" <<endl;    vis[x][y] = 1;
    cnt++;
    dfs(x + 1,y);
    dfs(x - 1,y);
    dfs(x,y + 1);
    dfs(x,y - 1);

}
int main()
{
    ios_base::sync_with_stdio(0);
    int i,j,k,l = 1,t;
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        cnt = 0;
        for(i = 0; i < 21; i++)
        {
            a[i].clear();
            for(j = 0; j < 21; j++)
            {
                vis[i][j] = 0;
            }
        }
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0 ; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(a[i][j] == '@')
                {
                    dfs(i,j);
                }
            }
        }
        cout << "Case "<<l<<": "<<cnt<<endl;
        l++;
    }

}
