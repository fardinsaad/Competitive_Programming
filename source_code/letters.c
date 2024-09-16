#include<stdio.h>

int main()
{
    int n,i,j,k,a[1001],cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            j=i;
            cnt++;
            break;
        }
    }
   for(i=j+1;i<n;i++)
    {
        if(a[i]==1)cnt++;
        else if(a[i]==0 && a[i+1]==1)
        {
            cnt=cnt+2;
            i++;
        }
        else if(a[i]==0 && a[i+1]==0)
        {
            for(k=i+2;k<n;k++)
            {
                if(a[k]==1)
                {
                    cnt=cnt+2;
                    i=k;
                    break;
                }
            }
        }
    }
    printf("%d\n",cnt);
    main();
}

