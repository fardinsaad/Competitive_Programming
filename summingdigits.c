#include<stdio.h>
int main()
{
long long int n,sum;
while (scanf("%lld",&n)==1 && n!=0)
             {
                if (n<10)
                    printf("%lld\n",n);
                if (n>9)
             {
                     while (n>9)
                     {
                        sum=0;
                        while (n>0 )
                            {
                            sum=sum+n%10;
                            n=n/10;
                            }
                       n=sum;
                       }
                       printf("%lld\n",sum);
              }
       }
return 0;
}
