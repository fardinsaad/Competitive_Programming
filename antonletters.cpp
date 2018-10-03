#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()

{
    char str[1000],st[1000];

    gets(str);

    int cnt = 0,l,i,j = 0,k;

    l=strlen(str);

    for(i = 1; i<l ; i+=3 )
    {
        st[j++] = str[i];
    }
    std::sort(st,st+j);
    for( i = 0; i < j-1 ;i++)
    {
        if(st[i] != st[i+1]) cnt++;
    }
    if( l == 2) printf("0");
    else printf("%d",cnt+1);
    return 0;


}
