#include<stdio.h>
int lin(int s,int i);
int n,ara[105];
int main()
{
    int q,i,s;
    scanf("%d",&n);

    for(i=0;i<n;i++)scanf("%d",&ara[i]);

    scanf("%d",&q);

    while(q--)
    {
        scanf("%d",&s);

        int save = lin(s,0);

        if(save==-1)printf("not found\n");
        else printf("%d\n",save);
    }
}

int lin(int s,int i)
{
   if(i>=n)return -1;

   if(ara[i]==s)return i;

   return lin(s,i+1);
}
