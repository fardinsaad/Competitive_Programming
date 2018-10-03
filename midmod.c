#include<stdio.h>
int modify(int x[10]);
int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,10},i;
    modify(x);
    for(i=0;i<10;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
int modify(int x[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i%2!=0)
            x[i]=x[i]*3;
        else if(i%2==0)
            x[i]=x[i];
    }
    return 0;
}
