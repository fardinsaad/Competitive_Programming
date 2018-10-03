#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,a[4000],n,x=1,cnt,b[2000],y;
         for(i=0;i<4000;i++)
    {
        while(x<4000)
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
    for(i=0,j=0;i<4000;i++)
    {
        if(a[i+1]-a[i]==2)
        {
            b[j]=a[i];
            b[j+1]=a[i+1];
            j+=2;
        }
    }
    while(scanf("%lld",&n)==1)
    {
        printf("(%lld, %lld)\n",b[(2*n)-2],b[(2*n)-1]);
    }

}
