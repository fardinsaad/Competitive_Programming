#include<stdio.h>
int main()
{
    int n,i,x=1,j,y,k;
    scanf("%d",&n);
    k=n*n;
    y=k;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n/2;j++)
       {
        printf(" %d %d",x,y);
        ++x;
        --y;

       }
       printf("\n");


    }
}

