#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()
{
    int a[7],i,j,k,cnt = 0,cnt1 = 1;

    for( i = 0 ; i < 6 ; i++) scanf("%d", &a[i]);

    std::sort(a,a+6);

    for( i = 0 ; i < 5 ; i++)
    {
        if(a[i] == a[i+1]) cnt1++;
        if(cnt1 == 4) break;
        else if(a[i] != a[i+1]) cnt1 = 1;

    }
    if(cnt1 == 4){

    for(i = 0 ; i < 5 ; i ++)
    {
        if(a[i] == a[i+1])
        {
            a[i] = 0;
            a[i + 1] = 0;
            i++;
            cnt++;
        }
        if(cnt == 2) break;
    }
    std::sort(a,a+6);
    if(a[4] == a[5] ) printf("Elephant\n");
    else if( a[4] < a[5]) printf("Bear\n");}
    else  printf("Alien\n");
    main();
}
