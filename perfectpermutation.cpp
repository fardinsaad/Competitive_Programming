#include<stdio.h>

int main()
{
    int n,a[101],i,j = 0,k;

    scanf("%d", &n);

    if( n % 2 != 0) printf("-1\n");

    else
    {
        for( i = 0 ; i < n ; i++)
        {
            if( i % 2 == 0 ) a[j] = i + 2;
            else a[j] = i;
            j++;
        }
    }
    for( i = 0 ; i < j ; i++) printf("%d ", a[i]);
   // main();
}

