#include<stdio.h>
int main()
{
        char s[100];
        int a,sum=0,n,t,i,j = 1,cnt = 0;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            for( i = 1;i<=n ; i++){
            scanf("%s",s);
            if(s[0] == 'd')
            {
                scanf("%d",&a);
                sum=sum+a;
            }
            else
            {
                if(cnt == 0)
                { printf("Case %d:\n%d\n",j,sum); cnt++ ; }
                else printf("%d\n",sum);
            }
        }
        cnt = 0; j++; sum = 0;
        }
}


