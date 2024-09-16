#include<stdio.h>

int main()

{
    long long int n,t,i,j,k,cell,temp=1;

    scanf("%I64d %I64d", &n, &t);

    long long int dhap[n];

    for( cell = 1;cell < n; cell++) scanf("%I64d", &dhap[cell]);

        for( cell = 1; ;)
    {
        if(cell == t) { printf("YES\n") ; return 0; }

        else if( cell > t) { printf("NO\n") ; return 0; }

        else if( cell != t)
        {
            cell = dhap[cell] +cell;
           // printf("%I64d\n",cell);
        }
    }
}
