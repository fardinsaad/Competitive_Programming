#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m],i,j,temp;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1||a[i]==n)
        {
            printf("NO");
            return 0;
        }
    }
    for(i=0;i<m-1;i++)
    {
    for(j=i+1;j<m;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    for(i=0;i<m;i++)
    {
    if(a[i+1]-a[i]==1 && a[i+2]-a[i+1]==1)
    {
        printf("NO");
        return 0;
    }
    }
    printf("YES");
    return 0;
}

