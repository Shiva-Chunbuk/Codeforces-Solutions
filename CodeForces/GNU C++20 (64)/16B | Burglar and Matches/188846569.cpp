#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int a[N],z[N];
int b[100];
int main(){
 int n,m,t;cin>>n>>m;
  for(int i=1;i<=m;i++)cin>>a[i]>>b[i];
  for(int i=1;i<=m;i++){
   for(int j=i;j<=m;j++){
    if(b[i]<b[j]){
   swap(b[i],b[j]);
   swap(a[i],a[j]);
                          }
                    }
  }
  for(int i=1;i<=m;i++)z[i]=z[i-1]+a[i];
  int i=1;int sum=0;
  while(z[i-1]<n&&i<=m){
  if(z[i]>n)sum+=(n-z[i-1])*b[i];
  else if(z[i]<=n) sum+=a[i]*b[i];
  i++;
  }
  cout<<sum<<endl;
}
                          