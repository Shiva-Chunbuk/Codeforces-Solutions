#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a;cin>>a;
    if(a%2==1){
        cout<<a/2+1<<endl;
    }
    else{
        cout<<a/2<<endl;
    }
}
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}