#include<bits/stdc++.h>
using namespace std;
#define fr first
#define se second
#define et0 exit(0);
#define rep(i, a, b) for(int i = (int)(a); i <= (int)(b); i ++)
#define rrep(i, a, b) for(int i = (int)(a); i >= (int)(b); i --)
#define IO ios::sync_with_stdio(false),cin.tie(0);
 
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<int, PII> PPI;
typedef unsigned long long ULL;
 
const int INF = 0X3f3f3f3f, N = 1e6 + 10, MOD = 1e9 + 7;
const double eps = 1e-7, pi = acos(-1);
 
vector<int> pos[10];
 
void solve() {
 string s;
 int k;
 cin >> s >> k;
 int len = s.length();
 rep (i, 0, 9) pos[i].clear();
 rep (i, 0, len - 1) pos[s[i] - '0'].push_back(i);
 
 int lf = 0;
 vector<int> res;
 rep (i, 1, len - k) {
  rep (j, 0, 9) {
   if (i == 1 && j == 0) continue;
   int p = lower_bound(pos[j].begin(), pos[j].end(), lf) - pos[j].begin();
   if (p == pos[j].size() || len - 1 - pos[j][p] < len - k - i) continue;
   res.push_back(j);
   lf = pos[j][p] + 1;
   break; 
  }
 } 
 rep (i, 0, res.size() - 1) cout << res[i];
 cout << endl;
}
signed main() {
 int test;
 cin >> test; 
 
 while (test--) {
  solve();
 }
}