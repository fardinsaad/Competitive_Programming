#include<stdio.h>
int main()
{
        int t,c,n,g=0,i,temp1,temp2,x=0;
        scanf("%d %d",&n,&t);
        getchar();
        char a[n];
        for(c=1;c<=n;c++)
        {

            scanf("%c",&a[c]);
        }
        for(i=1;i<=t;i++)
        {
                for(c=1;c<n;c++)
                {
                        if(a[c]=='B'&&a[c+1]=='G')
                        {
                                a[c]='G';
                                a[c+1]='B';
                                c++;
                        }
                }
        }
        for(c=1;c<=n;c++)
        {
                printf("%c",a[c]);
        }
}
