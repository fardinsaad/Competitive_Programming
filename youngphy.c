#include<stdio.h>
int main()
{
    int n,x,y,z,i,xsum=0,ysum=0,zsum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        xsum=xsum+x;
        ysum=ysum+y;
        zsum=zsum+z;
       // printf("%d",sum);
    }
    if(xsum==0 && ysum==0 && zsum==0)
        printf("YES\n");
    else
        printf("NO\n");
}
