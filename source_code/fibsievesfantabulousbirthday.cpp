#include<stdio.h>
#include<math.h>

int main()
{
    long long int t,s,n,i,j,k,cnt,temp,temp1;

    scanf("%lld",&t);

    for( i =1; i <= t; i++)
    {
        scanf("%lld",&s);
        cnt = ceil(sqrt(s));
        n = (cnt*(cnt - 1)+1);
        temp = n - s;
        temp1 = s - n;
        if(temp == 0)
        {
            printf("Case %lld: %lld %lld\n",i,cnt,cnt);
        }
        else if((cnt) % 2!= 0)
        {
            if( temp >0)   printf("Case %lld: %lld %lld\n",i,cnt,cnt-temp);
            else if(temp < 0)  printf("Case %lld: %lld %lld\n",i,cnt - temp1,cnt);
        }
        else
        {
           if(temp > 0)   printf("Case %lld: %lld %lld\n",i,cnt - temp,cnt);
            else if( temp < 0)  printf("Case %lld: %lld %lld\n",i,cnt,cnt - temp1);
        }
    }
}
