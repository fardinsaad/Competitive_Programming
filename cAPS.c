#include<stdio.h>
#include<string.h>

int main()

{
    char a[110];
    int i,j,x,y,count=1;
    scanf("%s",a);
    x=strlen(a);
    if(a[0]>=97 && a[0]<=122)
    {
        for(i=1;i<x;i++)
        {
            if(a[i]>=65 && a[i]<=90)
                count++;
        }
        if(count==x)
        {
            a[0]=a[0]-32;
            for(j=1;j<x;j++)
                a[j]=a[j]+32;
        }
    }
    else
    {
        count=1;
        for(i=1;i<x;i++)
        {
            if(a[i]>=65 && a[i]<=90)
            count++;
        }
        if(count==x)
        {
            for(i=0;i<x;i++)
                a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}
