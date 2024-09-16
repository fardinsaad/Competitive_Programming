#include<stdio.h>

int main()
{
    int n,b[5000],i,j,k,x,y,cnt=0,t=1,s=0,cnt1=0,cnt2=0,cnt3=0;

    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)cnt1++;
        else if(a[i]==2)cnt2++;
        else if(a[i]==3)cnt3++;
    }
    int p=(cnt1<=cnt2)?cnt1:cnt2;
    int q=(p<=cnt3)?p:cnt3;
    printf("%d\n",q);
    for(i=0;i<q;i++)
    {
        for(x=0;x<3;x++)
        {
        for(j=0;j<n;j++)
        {
            if(a[j]==t)
            {
             b[s++]=j+1;
             a[j]=0;
             ++t;
             break;
            }
        }
        }
         if(t==4)
         for(y=0;y<3;y++)printf("%d ",b[y]);
          s=0;
        t=1;
          printf("\n");
    }
}
