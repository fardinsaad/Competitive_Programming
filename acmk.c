#include<stdio.h>

int main()
{
    long long int n,k,y;
    scanf("%I64d %I64d",&n,&k);
    if(n%2==0)
    {
        if(k<=n/2)
          {
            y=(k*2)-1;
            printf("%I64d\n",y);
          }
        else if(k>n/2)
        {
            y=(k*2)-n;
            printf("%I64d\n",y);
        }
    }
    else if(n%2!=0)
    {
        if(k<=(n/2)+1)
        {
          y=(k*2)-1;
          printf("%I64d\n",y);

        }
         else if(k>(n/2)+1)
        {
            y=(k*2)-n-1;
            printf("%I64d\n",y);
        }
    }
    return 0;
}






