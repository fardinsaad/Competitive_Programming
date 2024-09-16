#include<bits/stdc++.h>
using namespace std;
vector<int>edge[40001];
vector<int>::iterator l;
map<int,long long int>mp[40001];
bool vis[40001];
int dis[40001],p;
int ara[40001];
int low,high;
int binary_searchh(int ara[],int r)
{
   int mid;
   while(low<=high)
   {
      mid=(low+high)/2;
      if(ara[mid]==r)
      {
          high=mid-1;
      }
      else if(r>ara[mid])
      {
          low=mid+1;
      }
      else
      {
          high=mid-1;
      }
   }
   return low;
}
void bfs(int r)
{
    int t,k;
    vis[r]=1;
    queue<int>pq;
    pq.push(r);
    while(!pq.empty())
    {
        t=pq.front();
        pq.pop();
        for(l=edge[t].begin(); l!=edge[t].end(); l++)
        {
            if(vis[*l]==0)
            {
                if(t==1)
                {
                    dis[*l]=mp[t][*l];
                }
                else
                {
                    k=mp[t][*l];
                    dis[*l]=min(dis[t],k);
                }
                pq.push(*l);
                vis[*l]=1;
            }


        }
    }
}
int main ()
{
    int nn,i,a,b,j,m,n,e,v,r,f;
    cin>>nn;
    for(i=1; i<=nn; i++)
    {
        cin>>a>>b;
        for(j=1; j<=b; j++)
        {
            cin>>m>>n>>e;
            edge[m].push_back(n);
            edge[n].push_back(m);
            mp[m][n]=e;
            mp[n][m]=e;
        }
        bfs(1);
        for(j=2; j<=a; j++)
        {
            if(dis[j]!=0)
            {
                ara[p]=dis[j];
                p++;
            }
        }
        cin>>v;
        cout<<"Case "<<i<<":"<<endl;
        for(j=1; j<=v; j++)
        {
            cin>>r;
            low=0;
            high=p-1;
            f=binary_searchh(ara,r);
            if(f==0)
            {
                cout<<p<<endl;
            }
            else
            {
                cout<<p-(f+1)<<endl;
            }
            //cout<<f<<endl;

        }
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        memset(ara,0,sizeof(ara));
        p=0;
        for(j=1;j<=a;j++)
        {
            edge[j].clear();
            mp[j].clear();
        }

    }
}
