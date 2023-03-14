#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        long long a, b, c, m, n, p, q;
        cin >> a >> b >> c >> m >> n >> p >> q;
        long long x = min(abs(n - q) + m + p, abs(m - p) + n + q);
        long long z = x + c;
      long long u= min( abs(m-p) + 2*b - n - q , abs(n-q) + 2*a - m- p );
        z = min( c + u,z);
        cout << z;
        cout << endl;
    }
}