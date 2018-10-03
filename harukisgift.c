#include<stdio.h>
int main()
{
    int n,x,sum=0,cnt1=0,cnt2=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==100)
            cnt1++;
        else if(x==200)
            cnt2++;
    }
    if(cnt1%2!=0)
        printf("NO");
    else if(cnt1%2==0 && cnt2%2==0)
    printf("YES");
    else if(cnt2%2!=0 && cnt1>=1)
        printf("YES");
    else
        printf("NO");
    main();
}
