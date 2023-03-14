// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
 
//     }
// }
#include <iostream>
#include <string>
using namespace std;
 
 const string pi = "3141592653589793238462643383279";
 
signed main() {
    int t;
    cin >> t;
 
    while (t--) {
        string n;
        cin >> n;
 
        long long count = 0;
        for (long long i = 0; i < n.length(); i++) {
            if (n[i] == pi[i]) {
                count++;
            } else {
                break;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}