#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,a[26]={0},k=0,cnt,x;
    scanf("%d",&n);
    getchar();
    char ara[n+10];
    gets(ara);
    for(i=0;ara[i]!='\0';i++)
        {
        if(ara[i]>='A' && ara[i]<='Z'){
            x=ara[i]-65;
            a[x]++;
        }
        else if(ara[i]>='a' && ara[i]<='z'){
            x=ara[i]-97;
            a[x]++;
        }
    }
    for(i=0;i<26;i++){
        if(a[i]==0)
        {
            cnt=0;
            break;
        }
        else
        {
            cnt=1;
        }
    }
    if(cnt==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}

