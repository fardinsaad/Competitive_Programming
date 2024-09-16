#include<bits/stdc++.h>
using namespace std;
long long int a[500000],b[500000],a1[500000],b1[500000];
int main()
{
    long long i,j,k,l = 500000 ,n,m,x,s,mn = 500000000,flag = 0,flag2 = 0;
    vector<pair<long long int,long long int>>pp;
    cin>>n>>m>>k;
    cin>>x>>s;
    for(i = 0; i < m; i++)
        cin>>a[i];
    for(i = 0; i < m; i++)
        cin>>a1[i];
    for(i = 0; i < m; i++)
    {
       pp.push_back(make_pair(a1[i],a[i]));
    }
    sort(pp.begin(),pp.end());
    for(i = 0; i < k; i++)
        cin>>b[i];
    for(i = 0; i < k; i++)
        cin>>b1[i];
    //  for(i = 0; i < m; i++)
       // cout<<pp[i].first<<" "<<pp[i].second<<endl;

    for(i = k - 1; i >= 0; i--)
    {
        if(b1[i] <= s)
        {
            l = i;
            flag2 = 1;
            break;
        }
    }

    if(flag2 == 0) b1[l] = 0;
    for(i = 0; i < m; i++)
    {
        if(pp[i].first + b1[l] <= s)
        {
            mn = min(mn,pp[i].second);
            flag = 1;
        }
        else break;
    }
    if(flag == 1 && flag2 == 1)
    {
        n = n - b[l];
        cout<<n*mn;
    }
    else if(flag == 0 && flag2 == 1)
    {
        n = n - b[l];
        cout<<n*x;
    }
    else if(flag2 == 0)
    {
         if(flag == 1)
    {
        cout<<n*mn;
    }
    else if(flag == 0)
    {
        cout<<n*x;
    }
    }


}
