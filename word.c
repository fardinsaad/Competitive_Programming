#include<stdio.h>
int main()
{
    char st[100];
    int i,j,cntl=0,cntu=0;
    scanf("%s",&st);
    j=strlen(st);
    for(i=0;i<j;i++)
    {
        if(st[i]>=97 && st[i]<=122)
        {
            cntl++;
        }
        else if(st[i]>=65 && st[i]<=90)
        {
            cntu++;
        }
    }
    if(cntl>=cntu)
    {
        for(i=0;i<j;i++)
        {
            if(st[i]>=65 && st[i]<=90)
            {
                st[i]=st[i]+32;
            }
        }
        printf("%s",st);

    }
    else if(cntu>cntl)
    {
         for(i=0;i<j;i++)
        {
            if(st[i]>=97 && st[i]<=122)
            {
                st[i]=st[i]-32;
            }
        }
        printf("%s",st);

    }
    //main();
}
