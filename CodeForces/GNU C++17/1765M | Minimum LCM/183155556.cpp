#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
 
void solve(){
 int n;
 cin >> n;
 for(int i=2; i*i<=n; i++){
  if(!(n%i)){
   cout << n/i << " " << n-n/i << '\n';
   return;
  }
 }
 cout << "1 " << n-1 << '\n';
}
int main(){
 fast
 int t;
 cin >> t;
 while(t--) solve();
}