#include<stdio.h>
#include <stdbool.h>

#define MAX 1000010

int ar[MAX];
bool visited[MAX];

int main(){
    int n,m,i,j,k,x,counter;

    while (scanf("%d %d", &n,&m)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d",&x);
            if (x<MAX) visited[x]=true;
        }

        k=0;
        for(i=1;i<=m;i++){
            if(!visited[i]){
                m-=i;
                ar[k++]=i;
            }
        }

        printf("%d\n", k);
            for (i=0;i<k;i++) printf("%d ",ar[i]);

    }
    return 0;
}

