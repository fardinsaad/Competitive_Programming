#include<stdio.h>

int main()
{
    int a,b,c,x,y,t,s,r,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b && a>=c)
            y=a,t=b,s=c;
        else if(b>=a && b>=c)
            y=b,t=a,s=c;
        else
            y=c,t=a,s=b;
        r=(t*t)+(s*s)-(y*y);
        if(r==0)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);

    }
    return 0;
}
