#include<stdio.h>
int main() {
    int beauty[1005];
    int i=0;
    for(;i<1002;i++) {
        beauty[i]=0;
    }
    int n;
    int a;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        beauty[a]++;
    }
    int max=0;
    for(i=0;i<1002;i++) {
        if(beauty[i]>max)
            max=beauty[i];
    }
    printf("%d",n-max);
    return 0;
}
