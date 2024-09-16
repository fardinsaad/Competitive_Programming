#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    scanf("%s",&st);
    int i,lenght;
    lenght=strlen(st);
    for(i=0;i<lenght;i++)
    {
        if(st[i]=='a' || st[i]=='A' || st[i]=='e' || st[i]=='E' || st[i]=='i' || st[i]=='I' || st[i]=='o' ||st[i]=='O' || st[i]=='u' || st[i]=='U' || st[i]=='y' || st[i]=='Y')
        continue;
        if(st[i]>=65 && st[i]<=90)
            printf(".%c",st[i]+32);
        else if(st[i]>=97 && st[i]<=122)
            printf(".%c",st[i]);
    }
}
