#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char st[1000];
    scanf("%s",st);
    l=strlen(st);

    for(i=0;i<l;i++)
    {
        if(i==0 && st[0]=='9')
            continue;
        else if(st[i]>='5' && st[i]<='9')
        {
            st[i]='9'-st[i]+48;
        }

    }
     printf("%s",st);
     main();
}
