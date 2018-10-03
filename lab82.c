#include<stdio.h>
void fibonacchi();
void gcd();
void factorial();
void lcm();
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1: fibonacchi();
    break;
    case 2: gcd();
    break;
    case 3: factorial();
    break;
    case 4: lcm();
    break;
    }
    return 0;
}
void fibonacchi()
{
    int a=1,b=1,temp=2,x;
    printf("Enter a no for fibonacchi: \n");
    scanf("%d",&x);
    if(x==1)
        printf("1");
    else if(x==2)
        printf("1 1");
    else if(x>2)
    {   printf("1 1 ");
        int y=x-2;

        while(y--)
        {
            temp=a+b;
            printf("%d ",temp);
            a=b;
            b=temp;

        }
    }
}
void gcd()
{
    int a,b,x,y,i;
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    if(a>b)
    {
        x=b;
        y=a;
    }
    for(i=x;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    //printf("%d",i);
}
void lcm()
{
    int a,b,x,y,i,r;
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    if(a>b)
    {
        x=b;
        y=a;
    }
    for(i=x;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
           // printf("%d",i);
            break;
        }
    }
    r=(x*y)/i;
    printf("%d",r);
}
void factorial()
{
    int fact=1,m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        fact=fact*i;
        //printf("%d\n",fact);
    }
    printf("%d",fact);
}
