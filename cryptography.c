#include<stdio.h>

int main()
{
    int i,t,n,y,j,cnt,count=0;
    scanf("%d",&t);
    for(y=1;y<=t;y++)
    {
       // scanf("%d",&n);
        for(i=1;;i++)
        {
            cnt=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    cnt++;
            }
            if(cnt==2)
                count++;
            if(count==n)
               {
                    printf("%d\n",i);
                    break;
               }

        }
        count=0;
    }
}
