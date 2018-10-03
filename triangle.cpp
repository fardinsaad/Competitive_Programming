#include<stdio.h>

double dist(double x1,double y1,double x2,double y2)
{
    double ans=(x1-x2)*(x1-x2) +(y1-y2)*(y1-y2);
    return ans;
}
int right(double x1,double y1,double x2,double y2,double x3,double y3)
{
//    double max;
    double a=dist(x1,y1,x2,y2);
    double b=dist(x2,y2,x3,y3);
    double c=dist(x3,y3,x1,y1);
//printf("%lf %lf %lf",a)
    if(a>b&&a>c){
        if(a==b+c){return 1;}
        else return 0;
    }
        int d;
        if(b>a&&b>c){
        if(b==a+c){return 1;}
        else return 0;
    }
        if(c>b&&c>a){
        if(c==b+a){return 1;}
        else return 0;
    }

    return 0;
}


int main()
{
    double x1,y1,x2,y2,x3,y3;
     scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    if(right(x1,y1,x2,y2,x3,y3)==1){printf("RIGHT");}
    else if(right(x1+1,y1,x2,y2,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1+1,x2,y2,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2+1,y2,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2,y2+1,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2,y2,x3+1,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2,y2,x3,y3+1)==1){printf("ALMOST");}
    else if(right(x1-1,y1,x2,y2,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1-1,x2,y2,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2-1,y2,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2,y2-1,x3,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2,y2,x3-1,y3)==1){printf("ALMOST");}
    else if(right(x1,y1,x2,y2,x3,y3-1)==1){printf("ALMOST");}
    else printf("NEITHER");

return 0;
 //   main();
}

