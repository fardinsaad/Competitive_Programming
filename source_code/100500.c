#include<stdio.h>

int main()
{
    int n,i,j,k,a[1001],cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("n");
    /*for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            j=i;
            printf("n");
            cnt++;
            break;
        }
    }
    printf("%d",j);
   / for(i=j+1;i<n;i++)
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
                    i++;
                    break;
                }
            }
        }
    }
    printf("%d\n",cnt);
    main();*/
}
