#include<stdio.h>
#include<algorithm>

int main()
{
    long long int n,i,j,k,temp = 0;

    scanf("%I64d",&n);

    long long int a[n],b[1000000000]={0};

    for( i = 1 ; i <= n; i++)
    {
        scanf("%I64d",&a[i]);
        j = a[i];
        b[j] = 1;
    }
    j = 1;
   // std::sort(a+1,a+n+1);
        for( i = 1 ; i <= n ; i ++)
        {
            if(b[j] != 1)
            {
                if(a[i] > j) { b[a[i]] = 0;a[i] = j; j++; }
            }
            else if(b[j] == 1) j++;
        }
               printf("%I64d\n",a[n]+1);
                return 0;
}
