#include<stdio.h>
int main()
{
    int n,i,j,x,y,z,sum,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        sum=x+y+z;
        if(sum>=2)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}
