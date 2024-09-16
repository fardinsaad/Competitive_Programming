#include <stdio.h>
#include <string.h>


int main(){
    int n ,z,i,j;
    scanf("%d%d",&n,&z);
    char dic[z][2][200];
    for(i = 0;i<z;++i){
        scanf("%s",dic[i][0]);
        scanf("%s",dic[i][1]);
    }
    for(i=0;i<n;++i){
        char x[200];
        scanf("%s",x);
        for(j=0;j<z;++j){
            if(!strcmp(x,dic[j][0]))break;
        }
        if(strlen(dic[j][0])>strlen(dic[j][1]))
            printf("%s ",dic[j][1]);
        else
            printf("%s ",dic[j][0]);
    }



    return 0;
}
