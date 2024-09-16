#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t,i,j,x,y,q;
    scanf("%d ", &t);
    for( j = 1; j<=t ; j++)
    {
        scanf("%d %d", &n, &q);
        printf("Case %d:\n", j);
        int a[n],cnt = 0,low,up;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        while( q--)
        {
            scanf("%d %d",&x ,&y);
            low = lower_bound(a,a+n,x)- a ;
            up = upper_bound(a,a+n,y) - a ;
            int ans = up - low;
            printf("%d\n",ans);

        }

    }

}
