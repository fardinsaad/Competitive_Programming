#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int n,i,cnt,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&st);
        cnt=strlen(st);
        if(cnt<11)
            {
                printf("%s\n",st);
                continue;
            }
        else if(cnt>10)
        for(j=0;j<cnt;j++)
        {
            printf("%c%d%c\n",st[j],cnt-2,st[cnt-1]);
            break;
        }
    }
}
