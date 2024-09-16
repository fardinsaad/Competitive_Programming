#include<stdio.h>
int main()

{
    char p;
    int cnt=0;
    while(p!=10)
    {
        scanf("%c",&p);
        if(p=='H'||p=='Q'||p=='9')
            cnt=1;
    }
    if(cnt==1)
        printf("YES\n");
    else
        printf("NO\n");
}
