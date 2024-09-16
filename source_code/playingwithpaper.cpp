#include<stdio.h>

int main()
{
    long long int n,m,temp,i,j,cnt = 0;

    scanf("%I64d %I64d", &n, &m);

    while( m != 0 )
    {
        temp = n % m;
        cnt = cnt + n/m ;
        n = m;
        m = temp;
    }
    printf("%I64d\n",cnt);
}
