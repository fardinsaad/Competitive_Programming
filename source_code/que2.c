#include<stdio.h>
#include<string.h>

int main()

{
    int n,i,j,k,s;
    scanf("%d %d",&n,&s);
    char a[50],temp;
    gets()
    for(i=1;i<=s;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j]=='G'&&a[j-1]=='B')
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                j++;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%c",a[i]);

}
