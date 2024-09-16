#include<stdio.h>

int main()
{
    int a[1000],r,odd=0,even=0,e,o,m,n,i;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
            if(even==1)
            {
                m=i;
                e=m;
            }
        }
        else if(a[i]%2!=0)
        {
            odd++;
            if(odd==1)
            {
                n=i;
                o=n;
            }
        }
    }
    if(even==1)printf("%d",e+1);
    else printf("%d",o+1);
}
