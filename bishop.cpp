#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for( i = 1; i <= t; i++)
    {
        long long int r1,r2,c1,c2;
        cin>>r1>>r2>>c1>>c2;
        if((r1+r2+c1+c2) % 2 != 0)
            cout<<"Case "<<i<<": "<<"impossible"<<'\n';
        else if( r1 == c1 && r2 == c2)
             cout<<"Case "<<i<<": "<0<<'\n';
        else if( abs(r1 - c1) == abs(c2 - r2))
            cout<<"Case "<<i<<": "<<1<<'\n';
        else
            cout<<"Case "<<i<<": "<<2<<'\n';
    }
}
