#include<stdio.h>
int main()
{
long long int a,b;
int count,carry;
while(scanf("%lld %lld",&a,&b))
     {
         if(a==0 && b==0)
            break;
         count=0;
         carry=0;
        while(a||b)
           {
            carry=(a%10+b%10+carry)/10;
             a=a/10;
             b=b/10;
             count=count+carry;
           }

if(count==0)
         printf("No carry operation.\n");
         else if(count==1)
         printf("1 carry operation.\n");
         else
         printf("%d carry operations.\n",count);
    }
return 0;
}
