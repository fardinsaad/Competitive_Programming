#include<bits/stdc++.h>
using namespace std;

long long int cnt,cnt1;
vector<long long int>a[20001];
bool vis[20001];
void bfs()
{

}

int main()
{
    long long int i,j,k,l = 1,t,m,n,x,y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < 20001 ;i++)
            a[i].clear();

        for(i = 0; i < n; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
    }
}
