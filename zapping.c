#include<stdio.h>
int main()
{
    int a,b,i,j,temp,diff;
    while(scanf("%d %d",&a,&b)==2 && a!=-1 && b!=-1)
    {
        i=a;
        j=b;
        if(a>b)
        {
            i=b;
            j=a;
        }
        temp=j-i;
        diff=(100-j)+i;
        if(temp<=diff)
            printf("%d\n",temp);
        else if(diff<temp)
            printf("%d\n",diff);
    }
    return 0;
}
