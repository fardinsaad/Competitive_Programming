#include<stdio.h>

int main()
{
    int n,i,j,k,cnt1 = 0 , cnt2 = 0,r,s,l;

    scanf("%d", &n);

    int a[n];

    for( i = 0; i < n ; i++) scanf("%d",&a[i]);

    for( i = 1,l=0; l < n -1 ; i++,l++)
    {
        if(a[0] < a[i]) { k = i; cnt1++ ; break ;}
    }
    for( i = 1,l=0; l < n -1 ; i++,l++)
    {
        if(a[0] > a[i]) { j = i; cnt2++ ;break ;}
    }
    r = k;
    for( i = k+1; i < n ; i++)
    {
        if(a[k] < a[i]) { cnt1++; k = i ;}
        //printf("# ");
    }
    s = j;
     for( i = j+1; i < n ; i++)
    {
        if(a[j] > a[i]) { cnt2++; j = i ;}
          // printf("# ");
    }
    printf("%d\n",cnt1+cnt2);
   // main();
}
