#include <bits/stdc++.h>
using namespace std;
#define N 3000000
#define ll long long
ll aa[N];
void miller()
{
    int n;
    ll s1 = 0, s2 = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> aa[i];
        if (aa[i] > 0)
        {
            s2 += aa[i];
            if (s1 < aa[i])
                ans += aa[i] - s1, s1 = 0;
            else
                s1 -= aa[i];
        }
        else
        {
            aa[i] = -aa[i];
            s1 += aa[i];
            if (s2 < aa[i])
                ans += aa[i] - s2, s2 = 0;
            else
                s2 -= aa[i];
        }
    }
    cout << ans << endl;
}
 
signed main()
{
    int t;
    cin >> t;
    while (t--)
        miller();
}