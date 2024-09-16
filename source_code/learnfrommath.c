#include<stdio.h>
#include<math.h>
int a[1000005];
int main()
{
    int n,x,y,i,j,k=0,l,cnt,temp;
    scanf("%d",&n);
    for(i=n;i>3;i--)
    {
        temp=sqrt(i);

        for(j=2;j<=temp;j++)
        {
            if(i%j==0)
                {
                    a[k]=i;
                    k++;
                    break;
                }
        }
    }
   // for(i=0;i<k;i++)printf("%I64d ",a[i]);
    for(x=0;x<k;x++)
    {
        for(j=i;j<k;j++)
        {
            if((a[x]+a[j])==n)
            {
                goto yes;
            }
        }
    }
    yes:
     //   printf("ererer");
    printf("%d %d",a[x],a[j]);

}
