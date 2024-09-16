#include<stdio.h>
#include<math.h>

long long int a[10000005]={0};
long long int n,d,i,j,k,m ;

int main(void)
{
    k=sqrt(10000005);

    for( i = 3; i < k; i+=2){
        if(a[i] == 0)
        for( j = i * i; j < 10000005; j+=i+i){
            a[j] = 1;}}
    scanf("%I64d", &n);
    while( n--) {
        scanf("%I64d", &d) ;
        m=(sqrt(d));
        if(a[m] == 0 && d!= 1 && m*m == d && (m%2 != 0 || m == 2))
            printf("YES\n");
        else printf("NO\n");
        }
}
