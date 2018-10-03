#include<stdio.h>

int main()
{
    int x,y,a,b,p,q,s;
    scanf("%d %d",&x,&y);

    scanf("%d %d",&a,&b);

    p=a-x;
    if(p>=0)
        p=p;
    else
        p=(-p);
    q=b-y;
    if(q>=0)
        q=q;
    else
        q=(-q);

    if(p>=q)
        printf("%d\n",p);
    else
        printf("%d\n",q);
        return 0;
}
