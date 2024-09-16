#include<stdio.h>

int main()
{
    int n,m,temp,i=1;
    scanf("%d %d",&n,&m);
    temp=n*m;
    while(1)
    {
        temp=temp-(m+n-1);
        if(i%2!=0 && temp==0)
        {
            printf("Akshat");
            return 0;
        }
        else if(i%2==0 && temp==0)
        {
            printf("Malvika");
            return 0;
        }
        m--;
        n--;
        i++;

    }
}
