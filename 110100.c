#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,temp,k;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        temp=(n*8)-7;
        k=sqrt(temp);
        if(temp%k==0)
        {
            printf("1\n");
        }
        else
            printf("0\n");

    }
    return 0;
}
