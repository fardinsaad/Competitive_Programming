#include <bits/stdc++.h>
using namespace std;

long long int poop;

long long  comb(long long  n,long long  r)
{
    long long  t,i,p;
    long long  nn=1;
    for(i=n,p=1;p<=r;i--,p++)
    {
        nn*=i;
        nn%=1000000007;
    }
    long long  rr = 1;
    for(i=1;i<=r;i++)
    {
        rr*=i;
    }

    return ((long long int )(nn/rr)%1000000007)*1.0 ;

}

int main()
{
    ios_base::sync_with_stdio(0);
    long long int i,cn=0,t;

    cin>>t;
    while(++cn<=t)
        {
            long long int k,n;
            cin>>k>>n;
        if(k == n)
        {
            cout<<"Case "<<cn<<": ";
            cout<<2<<"\n";
            continue;
        }

        long long int p=1;
        long long int ans = 1;
        for(i=n-k,p=1; i>=0; i-=k,p++)
        {
            long long int xx = i+p;
            long long int yoo = comb(xx,p)%1000000007;
            ans+=((long long int )yoo%1000000007);
        }
        cout<<"Case "<<cn<<": ";
        cout<<(long long int )ans%1000000007<<"\n";

    }



}
