#include<stdio.h>

int main()

{
    int n,i,y;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2*n;i=i+2)
    {
        y=a[i];
        a[i]=a[i+1];
        if(y>a[i])printf(">\n");
        else if(y<a[i])printf("<\n");
        else
            printf("=\n");

    }

}
