#include<stdio.h>

int main()
{

    int counter=0;
    char ch;
    char a,b,c,d,e;
    a=b=c=d=e='0';
    while(1)
    {
        scanf("%c",&ch);
        if(ch==' ')counter++;
        a=b;
        b=c;
        c=d;
        d=e;
        e=ch;

        if(a==e && b==d && a!=' ' && b!=32 && c!=32 && d!=32 && e!=32)
        {
            break;
        }
    }

    printf("%d\n",counter);
}
