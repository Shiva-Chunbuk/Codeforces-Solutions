#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string num = to_string(n);
 
        // Check if the number is already even
        if (num[num.length() - 1] % 2 == 0) {
            cout << 0 << endl;
            continue;
        }
 
        // Check if the first digit is even
        if (num[0] % 2 == 0) {
            cout << 1 << endl;
            continue;
        }
 
        // Check if the number has an even digit
        bool has_even = false;
        for (int i = 0; i < num.length(); i++) {
            if (num[i] % 2 == 0) {
                has_even = true;
                break;
            }
        }
 
        if (has_even) {
            cout << 2 << endl;
        } else {
            cout << -1 << endl;
        }
    }
 
    return 0;
}