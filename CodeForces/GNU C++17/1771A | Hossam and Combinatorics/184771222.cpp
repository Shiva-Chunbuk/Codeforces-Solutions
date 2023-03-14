#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
    cin>>t;
    while(t--){
        long long int n;
cin>>n;
vector<long long int>miller(n);
map<long long int,long long int>aryan;
for(int i=0;i<n;i++){
cin>>miller[i];
aryan[miller[i]]++;
}
sort(miller.begin(),miller.end());
if(aryan[miller[0]]==n){
    cout<<n*(n-1)<<endl;}
 
    else{
    cout<<2*(aryan[miller[0]]*aryan[miller[n-1]])<<endl;
}
    }
}