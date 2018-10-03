#include<bits/stdc++.h>
using namespace std;
vector<long long int>a,b;
map<long long int,long long int>mp;
int main()
{
    long long int i,j,k,n,m,p,t,sum = 0,s;
    ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
    cin >> n >> p;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(i = 0; i < n;i++)
    {
        t = a[i] / p;
        if(mp[t] == 0)
        {
            if(t * p != a[i])
            {
                b.push_back(t+1);
                sum = sum + t + 1;
               // cout<<11<<" "<<sum<<endl;
                mp[t+1]++;
                mp[t]++;
            }
            else
            {
             b.push_back(t);
             sum = sum + t;
            // cout<<12<<" "<<sum<<endl;
                mp[t]++;
            }
        }
        else
        {
           if ((mp[t + 1] == 0) && ((t + 1) * p >a[i]))
           {
               b.push_back(t + 1);
               sum = sum + t + 1;
             //  cout<<21<<" "<<sum<<endl;
               mp[t + 1]++;
           }
           else
           {
               s = b.size() - 1;
               sum = sum + b[s] + 1;
              // cout<<22<<" "<<sum<<endl;
               b.push_back(b[s] + 1);
               mp[b[s] + 1]++;
           }
        }
    }
    cout<<sum<<endl;
}
