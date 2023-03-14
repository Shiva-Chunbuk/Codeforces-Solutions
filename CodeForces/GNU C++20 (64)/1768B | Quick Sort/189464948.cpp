#include <iostream>
#include <vector>
int main() {
int t;
std::cin >> t;
while (t--) {
    int n, k;
    std::cin >> n >> k;
 
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
 
    std::vector<int> d;
    int l = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] == l) {
            d.push_back(l);
            l++;
        }
    }
 
    int len = d.size();
    int res = (n - len + k - 1) / k;
    std::cout << res << std::endl;
}
 
return 0;
}