#include<stdio.h>

int main()
{
    long long int n,h,t,i,j,k,cnt=0,sum=0,sum1=0;

    scanf("%I64d %I64d %I64d",&n,&h,&t);

    long long int a[n];

    for(i=0;i<n;i++)scanf("%I64d",&a[i]);

    for(i=0;i<n;i++)
    {
        sum=a[i]+a[i+1];
        if(sum<h)
        {
            if(sum<h && i<n-1) continue;
            else if(sum<h && i<n)
            {
                while(sum>0){sum = sum - t ; cnt++}
                printf("%I64d\n",cnt);
                return 0;
            }
        }
        else if(sum>h)
        {
            sum1=sum1+a[i];
            if(sum1<=h)
            {
                sum=sum1-t;
            }
            else {sum=sum1-t}

        }
        }
    }
}
