#include <bits/stdc++.h>
using namespace std;
const int N = 51;
int b[N * N];
void miller() {
 int n;cin >> n;
    int j = 1;
    for (int i = 1; i <= (n * n)/2; ++i) {
        b[j++] = i;
        b[j++] = n * n - i + 1;
        if ((j - 1 / n) % 2 == 0) {
            reverse(b + j - n, b + j);
        }
    }
    if (n * n & 1) b[j++] = (n * n + 1)/2;
 
    int cnt = 1;
    for (int i = n; i < j; i += n) {
        if (cnt % 2 == 0) {
            reverse(b + i - n + 1, b + i + 1);
        }
        cnt++;
    }
 
    for (int i = 1; i < j; ++i) {
        cout << b[i] << " ";
        if (i % n == 0) {
            cout << "\n";
        }
    }
}
 
int main() {
    int test;
    cin >> test;
    while (test--) {
        miller();
    }
}