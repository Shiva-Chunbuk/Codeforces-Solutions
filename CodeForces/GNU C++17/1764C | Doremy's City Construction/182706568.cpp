#include <bits/stdc++.h>
using namespace std;
#define end1 '\n'
#define pb push_back
#define F tirst
#define S second
#define mk make_pair
typedef long long ll;
const int N = 2e5 + 7, lg = 35;
int a[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = n / 2;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                ans = max(ans, (i + 1) * (n - i - 1));
            }
        }
        cout << ans << endl;
    }
}