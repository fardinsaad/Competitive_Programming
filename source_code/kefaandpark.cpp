#include<bits/stdc++.h>
using namespace std;
vector<int>a[200000],b;
bool vis[200000];
void dfs(int x,int cnt1);
long long int cnt = 0,n,m;
int main()
{
    int i,j,k,r,s,y;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        b.push_back(k);
    }
    for(i = 0 ; i < n - 1; i++)
    {
        cin >> r >> s;
        a[r].push_back(s);
        a[s].push_back(r);
    }
    dfs(1,0);
    cout << cnt << endl;
}
void dfs(int x,int cnt1)
{
    int i,flag = 0,j,l,s;
  //  cout << "xc = " << x << endl;
    if(vis[x] == 1)  return;
    else vis[x] = 1;
    if(b[x - 1] == 1) cnt1++;
    else cnt1 = 0;
    if(cnt1 > m) return;
    for(i = 0; i < a[x].size() ; i++)
    {
        j = a[x][i];
       if(vis[j] == 1) continue;
      // cout<< "j= " << j << endl;
        dfs(j,cnt1);
        flag++;
    }
    if(flag == 0)
    {
        cnt++;
       // cout<< "x = " << x <<" "<< cnt << endl;
    }
}

