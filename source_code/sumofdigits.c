#include<stdio.h>
int main()
{
    int cnt=0,n,temp,x,i,a[100],y,j,k;
    scanf("%d",&n);
    j=n;
    while(j>0)
    {
        y=j%10;
        cnt++;
        j=j/10;
    }
    for(temp=1,i=1;i<=cnt;i++)
    {
        temp=temp*9;
    }
    printf("%d\n",cnt);
    if(temp>=n  && cnt==2)
        {
            if(n%2==0)
            {
                x=n/2;
                if(x<10 && x<=2)
                   k=x*10+2;
                else if(x<10 && x>2)
                   k=20+x;
            }
            else if(n%3==0)
            {
                x=n/3;
                if(x<10 && x<=3)
                   k=x*10+3;
                else if(x<10 && x>3)
                   k=30+x;
            }
             else if(n%4==0)
            {
                x=n/4;
                if(x<10 && x<=4)
                   k=x*10+4;
                else if(x<10 && x>4)
                   k=40+x;

            }
             else if(n%5==0)
            {
                x=n/5;
                if(x<10 && x<=5)
                   k=x*10+5;
                else if(x<10 && x>5)
                   k=50+x;
            }
             else if(n%6==0)
            {
                x=n/6;
                if(x<10 && x<=6)
                   k=x*10+6;
                else if(x<10 && x>6)
                   k=60+x;
            }
             else if(n%7==0)
            {
                x=n/7;
                if(x<10 && x<=7)
                   k=x*10+7;
                else if(x<10 && x>7)
                   k=70+x;
                j++;
            }
             else if(n%8==0)
            {
                x=n/8;
                if(x<10 && x<=8)
                   k=x*10+8;
                else if(x<10 && x>8)
                   k=80+x;

            }
             else if(n%9==0)
            {
                x=n/9;
                if(x<10 && x<=9)
                   k=x*10+9;
            }
        }
        printf("%d",k);

}

