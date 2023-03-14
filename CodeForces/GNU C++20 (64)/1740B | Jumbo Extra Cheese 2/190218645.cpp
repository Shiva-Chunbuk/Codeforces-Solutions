#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for( int j = 0; j < n ; j++) {
        int t;
        cin >> t;
        vector<int> a(t);
        vector<int> b(t);
        int max_num = 0;
        for (int i = 0; i < t; i++) {
            cin >> a[i] >> b[i];
            if (a[i] < b[i]) {
                int k = a[i];
                a[i] = b[i];
                b[i] = k;
            }
            if (max_num < a[i]){
                max_num = a[i];
            }
        }
        long long ch = 2 * max_num;
        for (int i = 0; i < t; i++) {
            ch += 2 * b[i];
        }
 
        cout << ch << endl;
    }
    return 0;
}