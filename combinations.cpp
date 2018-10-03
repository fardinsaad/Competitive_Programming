#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,k,x,y,t = 1,temp;
    scanf("%lld",&n);
    while( n--)
    {
        scanf("%lld %lld", &x ,&y);
        int prodx = 1,prody = 1;
        if(y == 1 || y == x - 1) printf("Case %lld: %lld",t++,x);
        else if(y == x || y == 0) printf("Case %lld: 1",t++);
        else
        {
            temp = x - y;
            temp = min(y,temp);
            for(i = 1; i <= temp ; i++,x--)
            {
                prodx = prodx * x;
                prody = prody * i;
            }
            k = prodx/prody;
            printf("Case %lld: %lld",t++,k);
        }
    }
}
