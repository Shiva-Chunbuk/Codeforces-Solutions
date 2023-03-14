#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
int T;
cin >> T;
while (T--) {
int n;
cin >> n;
int nums[n];
for (int i = 0; i < n; i++) cin >> nums[i];
    int negatives = 0, s = 0, min_abs = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            negatives++;
        }
        s += abs(nums[i]);
        min_abs = min(min_abs, abs(nums[i]));
    }
 
    if (negatives % 2 == 0) {
        cout << s << endl;
    } else {
        cout << s - 2 * min_abs << endl;
    }
}
return 0;
}