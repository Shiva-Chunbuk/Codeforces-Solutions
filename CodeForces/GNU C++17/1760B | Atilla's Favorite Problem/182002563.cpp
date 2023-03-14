#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
     cin>>t;
    while(t--){
int n;
string s;
cin>>n>>s;
int output=0;
for(int i=0;i<n;i++){
  output = max(output,int(s[i]-'a'));
}
cout<<output+1<<"\n";
    }
}