#include<stdio.h>

int main()
{
    int n,h,i,j,k,cnt=0,x;

    scanf("%d %d",&n,&h);

    while(n--)
    {
        scanf("%d",&x);

        if(x>h) cnt+=2;
        else cnt++;
    }
    printf("%d\n",cnt);
    main();
}
