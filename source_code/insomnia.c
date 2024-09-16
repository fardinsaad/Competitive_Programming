#include<stdio.h>
int main()
{
    long long int a,b,c,d,n,i,cnt=0,temp;
    scanf("%I64d %I64d %I64d %I64d %I64d",&a,&b,&c,&d,&n);
    for(i=1;i<=n;i++)
    {
        if(i%a!=0 && i%b!=0 && i%c!=0 && i%d!=0)
            {
                cnt++;
            }
    }
    temp=n-cnt;
    printf("%I64d",temp);
  //  main();

}
