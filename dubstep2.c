
#include<stdio.h>
#include<string.h>
int main()
{
    char st[205],a[205];
    int i,j=0,k,temp=0;
    scanf("%s",st);
    k=strlen(st);

    for(i=0;i<k;i++)
{
        if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')
        {
            i+=2;
            a[j]=' ';
            j++;
        }
        else
    {
        a[j]=st[i];
        j++;

    }
}
    for(i=0;i<j;i++)
    {
        printf("%c",a[i]);
    }



}
