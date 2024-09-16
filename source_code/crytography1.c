#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,k;
    scanf("%d",&t);
    long long int i,x=1,y,a[20000],cnt,j;
    for(i=0;i<20000;i++)
    {
        while(x<200000)
        {
            cnt=0;
            if(x<8)
            {
            for(j=1;j<=x;j++)
            {
                if(x%j==0)
                    cnt++;
            }
            if(cnt==2)
            {
                a[i]=x;
                x++;
                break;
            }
            }
            else if(x>=8)
            {
                y=sqrt(x);
                for(j=2;j<=y;j++)
            {
                if(x%j==0)
            {
                cnt++;
                break;
            }
            }
            if(cnt==0)
            {
                a[i]=x;
                x++;
                break;
            }
            }
            x++;
        }

        }
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            printf("%I64d\n",a[n-1]);
        }

}
