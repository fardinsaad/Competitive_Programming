#include<stdio.h>

int main()
{
    int n,i,a=0,b=0,c=0,d=0,count=0;

    scanf("%d",&n);

    while(n-->0){

            scanf("%d",&i);

            if(i==1){a++;}
            else if(i==2){b++;}
            else if(i==3){c++;}
            else{d++;}
    }

    count = count + c + d ;

    if(a>=c){a = a - c;}
    else{a=0;}

    int q,r;

    q = b/2;
    r = b % 2;

    count = count + q;

    int m,r1,q1;

    m = 2*r + a;
    q1 = m/4;
    r1 = m % 4;
    if(r1!=0){
        q1++;
    }
    count = count + q1;

    printf("%d",count);

    return 0;
}
