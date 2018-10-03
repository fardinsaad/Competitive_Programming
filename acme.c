#include<stdio.h>

int main()
{
    int n,t,bi=0,i,num;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        num=n;
        bi=0;
        while(num>0)
    {
        if(num%2==0)
            num=num/2;
        else
        {
            bi++;
            num=num/2;
        }
    }

        if(bi%2==0)
            printf("case %d: even\n",i);
        else
            printf("case %d: odd\n",i);

    }
    return 0;
}
