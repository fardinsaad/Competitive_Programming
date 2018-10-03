#include<stdio.h>
int main()
{
    int x,y,sum=0,i,j;
    scanf("%d %d",&x,&y);
    j=(x*(x+1))/2;
   //if(j<=y){
    y = y % j;
    i=1;

    while(sum+i<=y)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",y-sum);

}
