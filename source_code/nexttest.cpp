#include<stdio.h>
#include<algorithm>

int main()
{
    int n,i,j,k;

    scanf("%d", &n);

    int a[n];

    for( i = 1; i <= n ; i++)scanf("%d", &a[i]);

    std::sort(a+1,a+n+1);
    //for( i = 1; i <= n ; i++)printf("%d", a[i]);
    for(i = 1; i <= n+1; i++)
    {
        if(a[i] != i) { printf("%d",i) ; return 0;}
    }


}
