#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,i,j,r,b,v,t = 1,m,s;
    cin>>n>>c;
    int a[n+5]={0};
    for( i = 1; i <= c; i++)
    {
        r = -1;
        for( j = 1; j<= n ; j++)
        {
            cin>>v;
            if( v > r) { r = v ; s = j ;}
        }
            a[s]+=1;
    }
   // for(i=1;i<=n;i++)cout<<a[i]<<" ";
    //cout<<'\n';
    if(n == 1) cout<<1<<'\n';
    else{
    for( i = 1;i < n; i++)
    {
        if(a[t] >= a[i+1]) m = t;
        else if(a[t] < a[i+1]) { t = i + 1; m = t; }
    }
    cout<<m<<'\n';
    }
   // main();
}
