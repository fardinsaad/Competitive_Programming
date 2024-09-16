#include<stdio.h>

int main()
{
    int n,a[100000],x,y,i,j,temp,cnt=1;

    scanf("%d",&n);
    scanf("%d",&x);
    temp=x;
    while(--n)
    {
       scanf("%d",&x);
       if(temp!=x)++cnt;
       temp=x;
    }
    printf("%d\n",cnt);
   // main();
}
