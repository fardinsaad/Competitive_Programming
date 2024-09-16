#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    int n;
    fp=fopen("OK","r");
    n=-1L;
    while(feof==0)
    {
        fseek(fp,n,2);
        printf("%c",c);
        n=n-1;
    }
    fclose(fp);
    return 0;
}
