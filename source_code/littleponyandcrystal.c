#include<stdio.h>
int main()
{
    int i=1,j,k,n,cnt,m,p=0,r;
    scanf("%d",&n);
    for(cnt=1;cnt<=n;cnt++)
    {
        if(cnt<=n/2+1)
        {
        for(j=1;j<=(n+1)/2-i;j++)
        {
            printf("*");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("D");
        }
         for(m=1;m<=(n+1)/2-i;m++)
        {
            printf("*");
        }
        printf("\n");
        }
        else if(cnt>n/2+1)
        {
            r=n+1-i;
         // printf("%d",i);
          for(j=1;j<=(n+1)/2-r;j++)
        {
            printf("*");
        }
        for(k=1;k<=2*r-1;k++)
        {
            printf("D");
        }
         for(m=1;m<=(n+1)/2-r;m++)
        {
            printf("*");
        }
        printf("\n");
        }
        i++;
       // printf("%d",cnt);
    }

}
