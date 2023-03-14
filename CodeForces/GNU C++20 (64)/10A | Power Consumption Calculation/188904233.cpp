#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main() {
    ll n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int l[n], r[n];
    ll ans = 0;
    for (int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        ans += p1 * (r[i] - l[i]);
    }
    for (int i = 1; i < n; i++){
        int t = l[i] - r[i - 1];
        if (t >= t1 + t2) ans += p1 * t1 + p2 * t2 + p3 * (t - t1 - t2);
        else if (t >= t1) ans += p1 * t1 + p2 * (t - t1);
        else ans += p1 * t;
    }
    cout << ans << endl;
}