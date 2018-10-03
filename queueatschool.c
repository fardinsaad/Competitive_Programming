#include<stdio.h>
#include<string.h>
int main()
{
        int n,l,i,j,k,m;
        scanf("%d %d\n",&n,&l);
        char a[n];
        gets(a);
        for(k=1;k<=l;k++)
        {
                for(j=0;j<n;j++)
                {
                        if(a[j]=='B' && a[j+1]=='G')
                        {
                                a[j]='G';
                                a[j+1]='B';
                                j++;
                        }
                }
        }
        printf("%s",a);
}
