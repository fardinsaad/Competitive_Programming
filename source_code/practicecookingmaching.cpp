#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t, a, b, c, d, count, ans;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a==b)
            ans = 0;
        else
        {
            count = 0;
            while ((a&(a-1))!=0)
            {
                a>>=1;
                count++;
            }
            c = log2(a);
            d = log2(b);
            ans = abs(c-d)+count;
        }
        printf("%d %d %d\n", ans,c,d);
    }
    return 0;
}
