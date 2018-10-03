#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,t,n,x,cnt,y = 0,m = 3000000000;
long long int a[1000000];
int main()
{
     ios_base::sync_with_stdio(0);
        cin.tie(0);
    cin>>t;
    while(t--)
    {
        y++;
        cin>>n;
        for(i = 0; i < n; i++)
        {
            cin>>x;
            a[x]++;
            m = max(m,x);
        }
        cnt = 1;
        for(i = 0; i <= m; i++)
        {
            if(a[i] == a[i+1]) cnt++;
        }
        cout<<"Case "<<y<<": "<<cnt<<'\n';
    }
    return 0;
}
