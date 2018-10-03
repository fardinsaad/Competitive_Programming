#include<bits/stdc++.h>
using namespace std;

int n,m;
bool vis[101][101],flag;
string a[101];

void dfs(int edge,int x,char ch,int px,int py)
{
    if(edge < 0 || x >= m ||  edge >= n || x < 0) return;
    if(a[edge][x] == '-') return;
    if(vis[edge][x] == 1) return;
    if(px < 0 && py < 0)
    {
        a[edge][x] = ch;
    }
    else
    {
       if(a[px][py] == 'B')
       {
           ch = 'W';
           a[edge][x] = ch;
       }
       else if(a[px][py] == 'W')
       {
           ch = 'B';
           a[edge][x] = ch;
       }
    }
    vis[edge][x] = 1;
   dfs(edge+1,x,ch,edge,x);
   dfs(edge-1,x,ch,edge,x);
   dfs(edge,x+1,ch,edge,x);
   dfs(edge,x-1,ch,edge,x);
}
int main()
{
    int i,j,k,l;
    string str;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   for(i = 0; i < n; i++)
   {
       for(j = 0; j < m; j++)
       {
           if(a[i][j] == '.' && vis[i][j] == 0)
           {
               dfs(i,j,'B',-1,-1);
           }
       }
   }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cout <<a[i][j];
        }
        cout << endl;
    }
}
