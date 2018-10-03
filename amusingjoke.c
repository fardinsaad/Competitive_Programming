#include<stdio.h>
#include<string.h>

int main()
{
    char a[105],b[105],c[105];
    int i,j,x,y,z,temp,count=0;
    scanf("%s %s %s",&a,&b,&c);
    x=strlen(a);
    y=strlen(b);
    z=strlen(c);
    strcat(a,b);
    for(i=0;i<x+y-1;i++)
    {
        for(j=0;j<x+y-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<z-1;i++)
    {
        for(j=0;j<z-1;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j+1];
                c[j+1]=c[j];
                c[j]=temp;
            }
        }
    }
    if(strcmp(a,c)==0)
        printf("YES");
    else
        printf("NO");

}
