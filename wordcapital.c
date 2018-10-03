#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    int i,n;
    scanf("%s",&st);
    if(st[0]>=97 && st[0]<=122)
    {
        st[0]=st[0]-32;
    }
    printf("%s",st);

}
