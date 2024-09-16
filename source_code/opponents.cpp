#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,cnt = 0,temp,mod,i,j,k,sum = 0,mx = 0;

    cin>>n>>d;

    string st;

    for( i = 1; i <=d ; i++ )
    {
        cin>>st;
        for( j = 0; j <= n-1; j++)
        {
            sum = sum+(st[j] - 48);
        }
         // cout<<sum<<'\n';
        if(sum != n )
        {
            cnt++;
        }
        else if(sum == n)
        {
            if(cnt >= mx)  mx = cnt;
            cnt = 0;
        }
        sum = 0;
    }
    mod=max(mx,cnt);
    cout<<mod<<'\n';
    main();
}
