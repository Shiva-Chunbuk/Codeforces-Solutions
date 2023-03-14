#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void find_path(vector<vector<ll>>& v, ll& x, ll& y, ll n) {
    for (ll i = 0; i < n; i++) {
        for (ll k = 0; k < n; k++) {
            if (i == k) continue;
            if (v[i][1] == v[k][0]) {
                x = i;
                y = k;
                return;
            }
        }
    }
}
 
signed main() {
    int t;
    cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<vector<ll>> v(n, vector<ll>(n - 1));
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n - 1; j++) cin >> v[i][j];
        }
        ll x = -1, y = -1;
        find_path(v, x, y, n);
 
        cout << v[x][0] << " ";
        for (ll i = 0; i < n - 1; i++) cout << v[y][i] << " ";
        cout << endl;
    }
}