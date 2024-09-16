#include<bits/stdc++.h>
using namespace std;
int dis[100005],x,y,m,n,i;
void dfs(int numb,int val);
int main()
{
   cin >> n >> m;
   for(i = 0; i < 15000 ; i++) dis[i] = 1000000;
   dfs(n,0);
   cout << dis[m] << endl;
}
void dfs(int numb,int val)
{
    if(numb < 1 || numb > 10000) return;
    if(val < dis[numb])
    {
        dis[numb] = val;
    }
    else return;
    if(numb == m)
        return;
    dfs(2 * numb, val + 1);
    dfs(numb - 1 , val + 1);

}
