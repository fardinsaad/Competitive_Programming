#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for( i = 1; i <= t ; i++)
    {
        int n,p,q,cnt = 0,sum = 0,x,y,b = 0,flag = 0;
        cin>>n>>p>>q;
        for( y = 1; y <= n; y++)
        {
            cin>>x;
            ++cnt;
            sum = sum + x;
            if( cnt <= p && sum <= q) ++b;
            //cout<<cnt<<" "<<sum<<" "<<b<<'\n';
        }
        cout<<"Case "<<i<<": "<<b<<'\n';
    }

}
