#include<stdio.h>
int main()
{
    char c,x,y,z,a,b;
    int cnt=0;
    for(;;)
    {
        scanf("%c",&c);
        x=c;
        if(x==32)
           {
              cnt++;
              continue;
           }
        scanf("%c",&c);
        y=c;
        if(y==32)
           {
             cnt++;
             continue;
           }
        scanf("%c",&c);
        z=c;
        if(z==32)
           {
             cnt++;
             continue;
           }
        scanf("%c",&c);
        a=c;
        if(a==32)
          {
            cnt++;
            continue;
          }
        scanf("%c",&c);
        b=c;
        if(b==32);
           {
             cnt++;
             continue;
           }
        if(x==b && y==a)
        {
            break;
        }
    }
    printf("%d",cnt);
}
