#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
int a[N],s[N],ans,n;
int main() {
cin>>n;
 for(int i = 1;i <= n;i++) scanf("%d",&a[i]),s[i] = s[i - 1] + a[i];
 
 for(int i = 1;i < n;i++) if(s[i] == s[n] - s[i]) ans++;
 
 cout << ans << endl;
} 