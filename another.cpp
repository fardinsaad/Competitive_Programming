#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define F first
#define S second
#define ll long long
#define ull  unsigned long long
#define pb push_back

using namespace std;
using namespace __gnu_pbds;
typedef  tree< int , null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int N = 300000;
int a[N];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt",  "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i <= n; i++){
        int k = 0;
        for (int j = 0; j <= i; j++){
            if (a[j] == 1) k++;
        }
        for (int j = i + 1; j <= n; j++){
            if (a[j] == 0) k++;
        }
        ans = max(ans, n - k);
    }
    cout << ans;
}
