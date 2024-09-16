#include<stdio.h>

int main()
{
    char st1[1000],st2[1000];
    scanf("%s %s",st1,st2);
    if(strcmp(st1,st2)==0)
        {
            printf("%s",st1);
        }
    else
        printf("1");
    return 0;
}
