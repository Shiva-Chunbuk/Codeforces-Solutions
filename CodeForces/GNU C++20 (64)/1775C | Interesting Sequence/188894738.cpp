#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define rep(i, a, n) for (int i = a; i <= n; i++)
#define per(i, a, n) for (int i = n; i >= a; i--)
typedef pair<int, int> PII;
 
int lowbit(int x)
{
    return x & -x;
}
 
void miller()
{
    int n, x;
    cin >> n >> x;
    if (n < x)
    {
        cout << -1 << '\n';
        return;
    }
    if (n == x)
    {
        cout << x << '\n';
        return;
    }
    int t = n, y = x;
    while (1)
    {
        int low = lowbit(n);
        int t = n + low;
        n += lowbit(n);
        n -= lowbit(n);
        if (n == x)
        {
            cout << t << '\n';
            return;
        }
        if (n < x)
        {
            cout << -1 << '\n';
            return;
        }
    }
}
 
signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        miller();
}