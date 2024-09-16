#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt0 = 0,cnt1 = 0, cnt = 0,t,s,r,m,i,j,k,first,last = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n == 1){ ++cnt1 ; if(cnt > 0) cnt--; }
        if( n == 0) cnt++, cnt0=max(cnt0,cnt);
    }
    if(cnt0 == 0) cnt0--;
    cout<<cnt0+cnt1<<'\n';
}
