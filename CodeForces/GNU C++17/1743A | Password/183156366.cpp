#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define int long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int answer = (10 - n) * (9 - n) * 3;
    cout << answer << endl;
}
 
int32_t main(){
        IOS;
        int m;
        m = 1;
        cin >> m;
        while (m--)  solve();
        
        
}