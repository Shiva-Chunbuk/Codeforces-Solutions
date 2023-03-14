#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
 int T;
 cin >> T;
 while(T--)
 {
  int cnt[105]={};
  int n,c;
  cin >> n >> c;
  for(int i=1;i<=n;i++)
  
  {int x;
  cin >> x;
  ++cnt[x];
  }
  int ans=0;
  for(int i=0;i<=104;i++) ans+=min(c,cnt[i]);
  cout << ans << "\n";
 }
 return 0;
}