#include<stdio.h>
int main()
{
    int t,i=0,j,k=1,m,n,a[1000],temp;
    scanf("%d",&t);
    for(m=1;m<=t;m++)
    {
        for( ;i<t*m;i++)
        {
            scanf("%d",&a[i]);
        }

    }
    for(n=0;n<t*t;i++)
    {
        for(j=0;j<(t*t)-n-1;j++)
        {
             if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(i=0;i<t*t;i++)
     {
         printf("%d ",a[i]);
     }
     return 0;
}
