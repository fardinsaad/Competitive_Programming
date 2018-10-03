#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int i,j=0,n,k,best=0,worst=0,cnt=0,cntw=0;
    cin>>n>>k;
    string s[n],s1;
    pair<int,string>p[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
        p[i].first=s[i].length();
        p[i].second=s[i];
    }
    cin>>s1;
    int m=s1.length();
    sort(p,p+n);
    for(i = 0; i < n; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}
