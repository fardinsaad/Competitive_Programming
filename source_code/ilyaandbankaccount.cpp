#include<stdio.h>

int main()
{
    long long int n;

    scanf("%I64d",&n);

    int a[100],i = 0,j,k;

    if(n >= 0)  printf("%I64d\n",n) ;

    else if( n < 0 && n % 10 == 0 && n > -100) printf("0\n");

    else if( n < 0)
    {
        n = -n;
        while( n > 0)
        {
            a[i] = n % 10;
            n = n / 10 ;
            i++;
        }

        if(a[0] > a[1])
        {
            for( j = i - 1 ; j > 0 ; j-- )
            {
                if( j == i - 1) printf("-%d",a[j]);
                else printf("%d",a[j]);
            }
        }
        else
        {
            printf("-");
            for( j = i - 1; j >= 0 ; j --)
            {
                if( j == 1) continue;
                 else if( j == i - 1) printf("%d",a[j]);
                 else printf("%d",a[j]);
            }
        }
    }
}
