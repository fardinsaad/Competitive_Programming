#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,y,n,m,t,i,j,k,d;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int flag1 = 0,flag2 = 0,cnt = 0;
        for(i = 0; ; i++)
        {
            m = pow(2,i);
            if(m == x) { flag1 = 1; break; }
            else if( m > x) {flag2 = 1; break;}
        }
         n = log2(y);
         j = log2(x);
        if(flag1 == 1)
        {
             d = abs(n - j);
             cout<<d<<'\n';
        }
        else if(flag2 == 1)
        {
            while((x & (x - 1)) != 0) { x = x >> 1 ; cnt++;}
            j = log2(x);
            d = abs(n - j) + cnt;
            cout<<d<<'\n';
        }

    }
}
