#include<stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if(a!=1 && b!=1 && c!=1)
    {
        x=a*b*c;
        printf("%d",x);

    }
    else if(a==1 && b==1 && c==1)
    {
        x=a+b+c;
        printf("%d",x);
    }
    else if(a==1 && b==1)
    {
        x=(a+b)*c;
        printf("%d",x);
    }
    else if(a==1 && c==1)
    {
        x=(a+b)+c;
        printf("%d",x);
    }
    else if(b==1 && c==1)
    {
        x=a*(b+c);
        printf("%d",x);
    }

    else if(a==1)
    {
        if(b>=c)
        {
            x=(a+b)*c;
            printf("%d",x);
        }
         else if(c>b)
        {
            x=(a+b)*c;
            printf("%d",x);

        }
    }
    else if(b==1)
    {
        if(a>=c)
        {
            x=(b+c)*a;
            printf("%d",x);
        }
         else if(c>b)
        {
            x=(a+b)*c;
            printf("%d",x);


        }
    }

    else if(c==1)
    {
        if(a>=b)
        {
            x=(c+b)*a;
            printf("%d",x);
        }
         else if(b>a)
        {
            x=(b+c)*a;
            printf("%d",x);

        }
    }

}

