#include<bits/stdc++.h>
using namespace std;


vector< pair<int,int> > v[100005];
int node[100005];
int ans,mx;
void dfs(int x,int y)
{
    if(y>node[x])return;
    ans++;
    for(int i=0;i<v[x].size();i++)
    {
        cout<<11 <<"node = "<< v[x][i].first+1 << " " <<"dis = " <<  y+v[x][i].second<< " ans = " <<ans<<endl;
        mx = max((y+v[x][i].second),0);
        dfs(v[x][i].first,max((y+v[x][i].second),0));
        cout<<22 <<"node = "<< v[x][i].first+1 << " " <<"dis = " <<  y+v[x][i].second<< " ans = "<<ans <<endl;

    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<(n);i++)
    {
        cin>>node[i];
    }

    for(int i=0;i<(n-1);i++)
    {
        int x,y;
        cin>>x>>y;
        v[x-1].push_back(make_pair(i+1,y));
    }
    dfs(0,0);
    cout<<n-ans<<"\n";
}
