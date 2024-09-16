#include<stdio.h>
int main()
{
    int n,x,y,cnt=0,temp,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        temp=y-x;
        if(temp>=2)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);
   // main();
}
