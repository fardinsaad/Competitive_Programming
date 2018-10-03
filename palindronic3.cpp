#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    int t,i,j,l,k = 0;
    scanf("%d",&t);
        for( i = 1; i <= t; i++)
        {
            scanf("%s",s1);
            l = strlen(s1);
            for(j = l-1; j>= 0; j--)
            {
                s2[k++] = s1[j];
            }
            s2[k] = '\0';
           // printf("%s\n",s2);
            if(strncmp(s1,s2,l-1)==0)printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);
            k = 0;
        }

}
