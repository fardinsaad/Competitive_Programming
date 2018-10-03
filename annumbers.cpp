#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,m,i,j,cnt,k,temp,sum;
    scanf("%I64d %I64d",&n,&m);

    temp = n * m;
    k = (n * m)/5;
    i = n % 5;
    j = m % 5;
    if(temp % 5 == 0) printf("%I64d\n",k);
    else if( temp % 5!= 0)
    {
        if((i+j) < 5) printf("%I64d\n",k);
        else if((i+j) > 5)  printf("%I64d\n",k+1);
        else if((i+j) == 5)
        {
            cnt = temp % 5;
            if(cnt == 1 ) printf("%I64d\n",k);
            else if(cnt == 4)  printf("%I64d\n",k+1);

        }
    }
   // main();
}
