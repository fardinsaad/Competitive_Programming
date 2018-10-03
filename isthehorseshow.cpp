#include<stdio.h>
#include<algorithm>

int main()

{
    long long int n, i, j, cnt = 0,a[4];

    for( i = 0; i < 4 ; i++) scanf("%I64d", &a[i]);

    std::sort(a,a+4);

    for( i = 0; i < 3; i++)
    {
        if(a[i] == a[i+1]) cnt++;
    }
    printf("%I64d\n",cnt);
}
