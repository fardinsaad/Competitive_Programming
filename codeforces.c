#include<stdio.h>

int main()
{
    char a[100];
    int i,cnt=0,count=0;
    for(i=0;i<100;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]==10)
            break;
        count++;
    }
    for(i=0;i<count;i++)
    {
        if(a[i]==a[i+1])
            cnt++;
        if(cnt==6)
            break;
        if(a[i]!=a[i+1])
            cnt=0;
     //   printf("%d",cnt);
    }
    if(cnt>=6)
        printf("YES\n",cnt);
    else
        printf("NO\n",cnt);
    return 0;
}
