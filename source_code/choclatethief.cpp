#include<stdio.h>

int main()
{
    int i,t;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
         int l,w,h,mx = 0,mn = 900000000,n,j,k,temp1,temp2;
        scanf("%d", &n);
        int a[n];
        char st[n][100];

        for( j = 0; j< n; j++)
        {
            scanf("%s", st[j]);
            scanf("%d %d %d",&l, &w, &h);
            a[j] = l *w *h;
            if(a[j] > mx) { mx = a[j] ; temp1 = j ;}
            if(a[j] < mn) { mn = a[j] ; temp2 = j ;}
        }
        if( mx != mn) printf("Case %d: %s took chocolate from %s\n",i,st[temp1],st[temp2]);
            else printf("Case %d: no thief\n",i);
    }
    return 0;
}
