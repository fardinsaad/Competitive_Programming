#include<stdio.h>
int main()
{
    char st[1000];
    int i,n,count=0;
    scanf("%d",&n);
    scanf("%s",st);
    for(i=0;i<n-1;i++)
    {
        if(st[i]==st[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
}
