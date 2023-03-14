#include<bits/stdc++.h>
#define int long long
using namespace std;
void miller()
{
    int n,m;
    cin >> n >> m;
    
    int cnt = 0,x;
    int now = 1;
    for(int i = 1; i <= m; i++){
  cin >> x;
  if(x >= now){
   cnt += x - now;
   now = x;
  }
  else{
   cnt += n - now + x;
   now = x;
  }
  
 }
 cout << cnt;
}
signed main(){
    miller();
}