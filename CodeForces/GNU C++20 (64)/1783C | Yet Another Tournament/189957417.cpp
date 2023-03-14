#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n && b[i] <= m; ++i) {
        m -= b[i];
        ++ans;
    }
    if (ans != 0 && ans != n && m + b[ans - 1] >= a[ans]) ++ans;
    cout << n + 1 - ans << '\n';
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}