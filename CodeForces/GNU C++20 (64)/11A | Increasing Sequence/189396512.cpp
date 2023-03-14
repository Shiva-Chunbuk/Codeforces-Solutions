#include<iostream>
using namespace std;
typedef long long ll;
ll a[2010],s=0,n,d,i;
int main(){
cin>>n>>d;
for(i=1;i<=n;i++) cin>>a[i];
for(i=2;i<=n;i++){
if(a[i]<=a[i-1]){
int t=(a[i-1]-a[i])/d+1;
s+=t,a[i]+=t*d;
}
}
cout<<s;
return 0;
}