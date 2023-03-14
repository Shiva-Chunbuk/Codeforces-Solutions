#include <bits/stdc++.h>
using namespace std;
#define int long long
void miller(){
  int n; cin>>n;
  int a[n],b[n],c[n];
  for(int i=0;i<n;i++){
   cin>>a[i];
   b[i]=a[i];
   c[i]=a[i];
}
 
int cnt1=0,cnt2=0,k1=0,k2=0;
for(int i=n-1;i>=0;i--){
    if(b[i]==1){
      b[i]=0;
      break;
    }
}
for(int i=0;i<n;i++){
    if(c[i]==0){
      c[i]=1;
      break;
    }
}
int cnt=0,k=0;
for(int i=0;i<n;i++){
    if(a[i]==1)k++;
     else cnt+=k;
}
for(int i=0;i<n;i++){
    if(b[i]==1)k1++;
     else cnt1+=k1;
}
for(int i=0;i<n;i++){
    if(c[i]==1)k2++;
     else cnt2+=k2;
}
cout<<max({cnt,cnt1,cnt2})<<'\n';
 
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test=1;
     cin>>test;
    while(test--){
      miller();
    }
 
 return 0;
}
 
 