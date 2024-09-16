#include<stdio.h>

int main()
{
    long long int n,x,i,j,k,sum,cnt = 0;

    scanf("%I64d %I64d",&n,&x);
    getchar();

    long long int a[n];

    char ch;

    sum = x;

    for(i = 0; i < n; i++)
    {
        scanf("%c",&ch);
        scanf("%I64d",&a[i]);
        getchar();
        if(ch=='+')
        {
            sum=sum+a[i];
            //printf("%I64d\n",sum);
        }
        else if(ch == '-')
        {
            sum = sum - a[i];
            if(sum<0) { sum = a[i] + sum; cnt++;}
        }
    }
    printf("%I64d %I64d",sum,cnt);
}
