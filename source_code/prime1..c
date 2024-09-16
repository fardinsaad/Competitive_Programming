#include<stdio.h>
#include<math.h>
int main()
{
    int i,y,j,n,cnt=0;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        y=sqrt(n);
        for(j=2;j<=y;j++)
        {
            if(n%j==0)
            {
                printf("Not prime");
                cnt++;
                break;
            }
        }
        if(cnt==0)
            printf("prime");
    }
}
