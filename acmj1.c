#include<stdio.h>

int main()
{
    long long int a,b;
    int t,r,e,o,cnt=0;
    scanf("%d",&t);
    for(r=1;r<=t;r++)
    {
        scanf("%lld %lld",&a,&b);
        cnt=0;
        for(;a<=b;a++)
        {if(a%2==0)
        {
            e=(a*(a/2))+(a/2);
            if(e%3==0)
                cnt++;
        }
        else if(a%2!=0)
        {
            o=(a*(a/2))+a;
            if(o%3==0)
                cnt++;

        }
        }
        printf("Case %d: %d\n",r,cnt);
    }
    return 0;
}
