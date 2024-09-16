#include<stdio.h>
int main()
{
    int t,a,b,i,sum,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d %d",&a,&b);
        sum=0;
        if(a%2==0)
        {
            for(i=a+1;i<=b;i+=2)
        {
            sum=sum+i;
        }
        printf("Case %d:%d\n",j,sum);
        }
        else if(a%2!=0)
        {
            for(i=a;i<=b;i+=2)
            {
                sum=sum+i;
            }
            printf("Case %d:%d\n",j,sum);
        }
    }
}
