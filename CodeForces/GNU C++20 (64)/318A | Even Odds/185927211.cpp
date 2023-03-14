#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll n,k;
 cin>>n>>k;
 if(n%2==0)
 {
  if(n/2>=k)
  {
   cout<<k*2-1<<endl;
  }
  if(n/2<k)
  {
  ll temp=k-n/2;
   cout<<temp*2<<endl;
  }
}
else
{
 if((n+1)/2>=k)
  cout<<k*2-1<<endl;
 else
 {
 ll temp=k-(n+1)/2;
  cout<<temp*2<<endl;
 }
}
}