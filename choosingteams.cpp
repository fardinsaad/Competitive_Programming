#include<stdio.h>
#include<algorithm>

int main()
{
    int n,k,i,j,a[2001],cnt = 0,temp,sos;

    scanf("%d %d",&n, &k);

    for( i = 0 ; i < n ; i++) scanf("%d", &a[i]);

    std::sort(a,a+n);

    if(n < 3) printf("0\n");

     else{
        if(n % 3 == 0)
        {
            for( i = 0,j = 2; i < n/3 ; i++,j+=3)
            {
                temp = a[j] + k;
                if(temp <= 5) cnt++;
            }
        }
        else
        {
            for( i = 0,j = 2; i < n/3 ; i++,j+=3)
            {
                if(j > n-1)
                {
                    temp = a[n-1] + k;
                    if(temp <= 5) cnt++;
                }
                else
                {
                     temp = a[j] + k;
                if(temp <= 5) cnt++;
                }
            }
        }
         printf("%d\n",cnt);
     }

     //main();

}
