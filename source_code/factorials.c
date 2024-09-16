#include<stdio.h>
int main()
{
    long long int n,k=-2,i,j,fact,y;
    char ch='x';
    scanf("%I64d",&n);
    while(ch!=10)
    {
        scanf("%c",&ch);
        k++;
        //printf("%d\n",k);
    }
    y=n%k;
    if(y!=0)
    {
        fact=n;
        for(i=1;n-k*i>0;i++)
        {
            fact=fact*(n-k*i);
          //  printf("%d\n",fact);
        }
        //fact=fact*y;
        printf("%I64d",fact);
    }
    else if(y==0)
    {
        fact=n;
        for(i=1;n-k*i;i++)
        {
            fact=fact*(n-k*i);
        }
        printf("%I64d",fact);
    }

}
