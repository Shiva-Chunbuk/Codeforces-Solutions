#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl 
#define pqvii priority_queue<int,vector<int>,greater<int>>
 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  if (n % 2 == 0 || n % 3 == 0)
        return false;
 
   
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
int maximum=0;
int patalagaodaya(int a[],int n,int d,int sum){
    if(d==n){return 0;}
    for(int i=d;i<n;i++){
        if((sum+a[i])<0){
            int f=patalagaodaya(a,n,i+1,sum+a[i])+1;
            int e=patalagaodaya(a,n,i+1,sum);
            maximum=max(f,e);
            return maximum;
        }
    }
    return maximum;
}
signed main(){
   int t;
   cin>>t;
   while(t--){
  string s;
  cin>>s;
  int n=s.size();
  if(s[1]=='a'){
      cout<<s[0]<<" "<<s[1]<<" ";
      for(int i=2;i<n;i++){
          cout<<s[i];
      }
  }
  else{
      cout<<s[0]<<" ";
      for(int i=1;i<n-1;i++){
          cout<<s[i];
      }
      cout<<" "<<s[n-1];
  }
  cout<<endl;
   }
}