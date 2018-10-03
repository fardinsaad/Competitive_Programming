#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char st[1000];
    scanf("%s",&st);
    k=strlen(st);
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(j%2!=0)
                continue;
            if(st[j]>st[j+2])
            {
                int temp=st[j];
                st[j]=st[j+2];
                st[j+2]=temp;
            }

        }
    }
    printf("%s",st);

}
