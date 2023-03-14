#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
    set<char> a;
 
    for (const char& c: s) {
        a.insert(tolower(c));
        if (a.size() >= 26) {
            cout << "YES";
            return 0;
        }
    }
 
    cout << "NO";
    return 0;
 
}