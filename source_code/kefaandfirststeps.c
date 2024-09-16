#include<stdio.h>
#include<algorithm>

int main()
{
    int n,cnt=0,b[1000],a[1000],i,j=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;;)
    {
        if(a[i]<=a[i+1])
        {
            cnt++;
        }
        else if(a[i]>a[i+1])
        {
            b[j]=cnt;
            j++;
            cnt=0;
        }
        i++;
        if(i==(n-1))
            {
                if(cnt>0 && j>0)
                   {
                     b[j]=cnt;
                     j++;
                   }
                   break;
            }
    }
    if(j>0){
    std::sort(b,b+j);
    printf("%d",b[j-1]);
    }
    else
        printf("%d",cnt+1);
    main();
}
