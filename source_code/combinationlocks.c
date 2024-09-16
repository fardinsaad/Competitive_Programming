#include<stdio.h>

int main()
{
    int n,sum=0,i,j,k,y,x;
    char a[1001],b[1001];

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++) scanf("%c",&a[i]);
    getchar();

    for(j=0;j<n;j++) scanf("%c",&b[j]);

    for(k=0;k<n;k++)
    {
        if(a[k]>b[k])x=a[k]-b[k];
        else x=b[k]-a[k];
        if(x<6) sum=sum+x;
        else
        {
            if(a[k]>b[k])
            {
                x=b[k]+10-a[k];
                sum=sum+x;
            }
            else
            {
                x=a[k]+10-b[k];
                sum=sum+x;
            }
        }

    }
    printf("%d\n",sum);

}
