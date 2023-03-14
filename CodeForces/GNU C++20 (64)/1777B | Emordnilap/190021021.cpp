#include<bits/stdc++.h>
using namespace std;
 
void miller(long long n, long long mod){
    if(n==1){
        cout<<0<<endl;
        return;
    }
    else{
        long long x=n*(n-1);
        for(long long i=2;i<=n;i++){
            x=(x*i)%mod;
        }
        cout<<x<<endl;
    }
}
int main(){
  int t;
  cin>>t;
  long long n;
  long long mod = 1e9+7;
  while(t--){
      cin>>n;
      miller(n,mod);
  }
}