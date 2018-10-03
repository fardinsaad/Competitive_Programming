#include<stdio.h>
#include<string.h>

int main(void)
{
    int i,len,x;
    int t;
    char s[100000];
    scanf("%s",s);
    x=-1;
    len=strlen(s);
    for(i=len-2;i>=0;--i)
    {
        if((s[i]-'0')%2==0)
        {
            if(x==-1)
            {
                x=i;
            }
            else if(s[i]<s[len-1])
            {
                x=i;
            }
        }
    }
    if(x==-1)
    {
        printf("-1\n");
    }
    else
    {
        t=s[len-1];
        s[len-1]=s[x];
        s[x]=t;
        puts(s);
    }
    return 0;
}
