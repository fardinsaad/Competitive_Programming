#include<stdio.h>

int main()
{
    int n,m,i,j,k,t,r;

    scanf("%d %d",&n,&m);
    if(n==1 && m==10) printf("-1\n");
    else if(n>=1 && m<=9)
    {
        for(k=1;k<=n;k++)
        {
            printf("%d",m);
        }
    }
    else if(n>=2&& m==10)
    {
          for(k=1;k<=n;k++)
        {
            if(k==n) printf("0");
            else printf("1");
        }
    }
    main();
}
