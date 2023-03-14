#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int x = 0;
        int i = 0;
        while (i < n) {
            int a;
            cin >> a;
            if (a == 1) {
                x++;
            }
            i++;
        }
 
        int result;
        if (x % 2 != 0) {
            result = x / 2 + n - x + 1;
        } else {
            result = x / 2 + n - x;
        }
        cout << result << endl;
    }
    return 0;
}