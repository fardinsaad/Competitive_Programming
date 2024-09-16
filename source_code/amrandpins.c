#include<stdio.h>
#include<math.h>
int main()
{
    int r,x,y,x1,y1,i,j,k,d;

    scanf("%d %d %d %d %d",&r,&x,&y,&x1,&y1);
    i=ceil(sqrt((pow((x-x1),2)+pow((y-y1),2)))/(2*r));
    printf("%d\n",i);
  //  main();

}
