#include<stdio.h>

int main()
{
    long long int n,m,i,j,k,time=0,rem=0,d,cur=1;

    scanf("%I64d %I64d", &n, &m);
    j = n;

    while( m-- )
    {
        scanf("%I64d", &d);

        if(cur > d){
        time = time + d + j - cur;
        cur = d;}

        else if(cur < d)
        {
            time = time + d - cur;
            cur = d;
        }
        else if(cur == d)  cur = d ;
    }
    printf("%I64d\n",time);
}
