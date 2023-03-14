#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while (t--) {
int n, cnt = 0, sum = 0, ones = 0;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) {
cin >> a[i];
if (a[i] == 1) ones++;
}
 
  for (int i = 0; i < n - 1; i++) {
     if (a[i] == -1 && a[i + 1] == -1) {
        a[i] = 1;
        a[i + 1] = 1;
        cnt++;
     }
     if (cnt == 1) break;
  }
 
  if (cnt == 1) {
     for (int i = 0; i < n; i++) sum += a[i];
     cout << sum << endl;
  } else if (ones != n) {
     cout << accumulate(a.begin(), a.end(), sum) << endl;
  } else {
     cout << accumulate(a.begin(), a.end(), sum) - 4 << endl;
  }
}
return 0;
}