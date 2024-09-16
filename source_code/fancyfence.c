#include<stdio.h>
int main()
{
    int n,angle;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&angle);
        if(360%(180-angle)==0)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}
