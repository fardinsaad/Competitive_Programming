#include<stdio.h>

int main()
{
    int a,b,c,temp;

    scanf("%d %d %d",&a, &b, &c);

    if(a==b) printf("YES\n");
    else if((c > 0 && (b-a) > 0) || ( c < 0 && (b - a) < 0))
    {
        temp = (b-a) % c;
        if(temp == 0) printf("YES\n");
        else printf("NO\n");
    }
    else printf("NO\n");
   // main();
}
