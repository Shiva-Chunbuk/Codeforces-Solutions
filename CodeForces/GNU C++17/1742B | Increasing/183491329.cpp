#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,count=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
 sort(v.begin(),v.end());
    if(n==1) {
            cout<<"YES"<<endl;
            continue;
    }
    else{
    for(int i=0;i<(n-1);i++){
        if(v[i]==v[i+1]){
            count=1;
            cout<<"NO"<<endl;
            break;
        }
    }
}
if(count==0) cout<<"YES"<<endl;
}
}