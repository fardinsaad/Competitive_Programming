#include<stdio.h>

int main()
{
    long long int n, i ,j, k, cnt25 = 0, cnt50 = 0;

    scanf("%I64d", &n);

    long long int a[100000];

    for(i = 0 ; i < n ; i++) scanf("%I64d", &a[i]);

    if(a[0] == 50 || a[0] == 100) { printf("NO\n") ; return 0 ; }

    else if(a[0] == 25)
    {
        for( i = 0 ; i < n ; i++)
        {
            if(a[i] == 25) cnt25++;

            else if(a[i] == 50) { if(cnt25 > 0)  { cnt25-- ; cnt50++ ; } else if(cnt25 == 0)  { printf("NO\n") ; return 0 ; } }

            else if(a[i] == 100)
                {
                    if(cnt25 > 0 && cnt50 > 0 )
                        {
                            cnt25--;
                            cnt50--;
                        }
                    else if( cnt25 > 2) cnt25 = cnt25 - 3;
                    else { printf("NO\n") ; return 0 ;}
                }

        }
        if(i == n)
        printf("YES\n");
    }
}
