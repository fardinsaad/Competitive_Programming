#include<stdio.h>
#include<string.h>
int main()
{
    char st1[1000],st2[1000];
    int i,j,k,l;
    scanf("%s",st1);
    scanf("%s",st2);
    strrev(st2);
    if(strcmp(st1,st2)==0)
    {
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
    //main();
}
