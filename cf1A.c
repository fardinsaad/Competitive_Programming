#include<stdio.h>

int main()
{
    int m,n,a,y,x,temp;
    scanf("%d %d %d",&m,&n,&a);
    temp=(m*n)-(a*a);
    if(a==1)
    {
        printf("%d",m*n);
    }
    else if(temp>=0)
    {
        y=(m+n)/2;
        x=temp/y;
        printf("%d\n",x+1);

    }
    else
        printf("1\n");
    return 0;

}
