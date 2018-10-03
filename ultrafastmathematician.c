#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    int i,n;
    scanf("%s",&a);
    scanf("%s",&b);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
}
