#include<bits/stdc++.h>
using namespace std;
const int N =1010;
int g[N][N];
int main(){
 int n,x;
 cin>>n>>x;
 int l=-1,r=1001;
 int a,b;
 while(n--){
  cin>>a>>b;
  if(a>b)swap(a,b);
  l=max(l,a);
  r=min(r,b);
 }
 if(r<l)cout<<-1;
 else if(l<=x&&x<=r)cout<<0;
 else cout<<min(abs(r-x),abs(l-x));
}