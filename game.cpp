#include<stdio.h>

int main()
{
    int n1,n2,k1,k2,sum1,sum2;

    scanf("%d %d %d %d",&n1,&n2,&k1,&k2);

    while(1)
    {
        n1 = n1 - 1;
        if(n1 == 0) { printf("Second\n"); return 0 ;}
        n2 = n2 - 1;
        if(n2 == 0) { printf("First\n"); return 0 ; }
    }
}
