#include<stdio.h>
void sois(long long int n,long long int m;
int main()
{
    long long int val=1000000000000,n,m=0;
    scanf("%I64d",&n);
    sois(n,m);
    printf("%I64d",val);
    return 0;
}
void sois(long long int n,long long int m)
{
    int i,temp;
    if(m>val)
        {
            val=m;
        }
    else if(m<val)
    {
        for(i=2;i<10;i++)
        {
            if(n%i==0)
            {
                temp=10*m+i;
                n=n/i;
            }
            sois(n,temp)

        }
    }

}


