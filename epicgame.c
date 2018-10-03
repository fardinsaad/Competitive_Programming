#include<stdio.h.>
int gcd(int a,int b);
int main()
{
    int x,y,z,i,j,k;
    scanf("%d %d %d",&x,&y,&z);
    while(1)
    {
        i=gcd(x,z);
        z-=i;
        if(z==0)
        {
            printf("0");
            break;
        }
        j=gcd(y,z);
        z-=j;
        if(z==0)
        {
            printf("1");
            break;
        }

    }
}

int gcd(int a,int b)
{
    int temp,r;
    if(b>a)
    {
        temp=b;
        b=a;
        a=temp;
    }
    while(b)
        {
            r=a%b;
            a=b;
            b=r;
        }
        return a;
}
