#include<stdio.h>

int main()

{
    int n,i,j,k,x,y,cnt=0,a[105]={0},b[105]={0};;

    scanf(" %d ", &n);

    while(n--)
    {
        scanf("%d %d", &x, &y);
        { a[x]++; b[y]++; }
    }
    for(i=1;i<=100;i++)
    {
        if(a[i] != 0 && b[i] != 0){cnt += (a[i] * b[i]); }
    }
    printf("%d\n",cnt);
    main();
}
