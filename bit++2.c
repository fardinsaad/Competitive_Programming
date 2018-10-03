#include<stdio.h>
int main()
{
    int n,i,X=0;
    char a,b,c;
    for(i=1;i<=n;i++)
    {
        scanf("%c %c %c",&a,&b,&c);
        if(b=='+')
        {
            ++X;
        }
        else if(b=='-')
        {
            --X;
        }
    }
    printf("%d",X);
}

