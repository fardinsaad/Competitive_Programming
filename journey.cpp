#include<bits/stdc++.h>
using namespace std;
vector<long long int>a[100005],b;
long long int vis[100005];
long double sum;

void dfs(long long int x,long double dis,long double prob)
{
    if(vis[x] == 1) return;
    //long long int sum = 0;
    vis[x] = 1;
    if(a[x].size() == 1)
    {
        sum += dis * prob;
        //cout << sum << " ";
    }
    for(long long int i = 0; i < a[x].size(); i++)
    {
        long long int y = a[x][i];
       // cout<< "sum " << sum << " x " << x << " y " << y<<" dis " <<dis<<" prob "<< prob<<endl;
        if(x != 1)
            dfs(y, dis+1 , prob / (double) (a[x].size() - 1));
        else
            dfs(y, dis+1 , prob / (double) (a[x].size()));
    }

}
int main()
{
    long long int i,j,k,l,m,n,cnt = 0,s;
    long double temp;
    cin >> n;
    for(i = 0; i < n - 1;i++)
    {
        cin >> m >> l;
        a[m].push_back(l);
        a[l].push_back(m);
    }
    dfs(1,0,1);
    //temp = (long double)cnt/(long double)s;
    cout<<fixed<<setprecision(10)<<sum<<"\n";

}
