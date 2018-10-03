#include<stdio.h>
int main()
{
    int n,a[1000],cnt=0,i,j,k,temp;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    temp=a[k-1];
    for(j=0;j<n;j++)
    {
        if (a[j]>=temp && a[j]>0)
        {
            cnt++;
        }
        else
            continue;
    }
    printf("%d",cnt);
}
