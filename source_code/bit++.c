#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,X=0;
    char st[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&st);
        {
            if(st[1]=='+')
                {
                    ++X;
                //    printf("%d",X);
                }
            else if(st[1]=='-')
                {
                    --X;
                 //    printf("%d",X);
                }
        }

    }
    printf("%d\n",X);
}
