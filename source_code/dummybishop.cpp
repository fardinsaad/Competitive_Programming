#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
    int tst, i;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
       long long int r1,c1,r2,c2,r,c;
        scanf("%lld%lld%lld%lld", &r1, &c1, &r2, &c2);
        if((r1%2==1 && c1%2==0) || (r1%2==0 && c1%2==1))
        {
            if((r2%2==0 && c2%2==0) || (r2%2==1 && c2%2==1))
                printf("Case %d: impossible\n", i);
            else
            {
                r = abs(r1-r2);
                c = abs(c1-c2);
                if(r==c) printf("Case %d: 1\n", i);
                else printf("Case %d: 2\n", i);
            }
        }
        else if((r1%2==1 && c1%2==1) || (r1%2==0 && c1%2==0))
        {
            if((r2%2==1 && c2%2==0) || (r2%2==0 && c2%2==1))
                printf("Case %d: impossible\n", i);
            else
            {
                r = abs(r1-r2);
                c = abs(c1-c2);
                if(r==c) printf("Case %d: 1\n", i);
                else printf("Case %d: 2\n", i);
            }
        }
    }
    return 0;
}
