#include <bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
while(t>0){
int n,m; cin>>n>>m;
vector<vector<int>> v(n+1, vector<int> (m+1,0));
for(int i = 1; i<=n; i++){
for(int j = 1; j<=m; j++){
cin>>v[i][j];
}
}
int final = 0;
for(int i = 1; i<=n;i++){
for(int j = 1; j<=m; j++){
    int ans = 0;
    int r = i, c = j;
    ans +=v[r][c]; r =i+1;c=j+1;
    while(r<=n && c<=m){
        ans+=v[r][c];
        r++;c++;
    }
    r = i-1;c=j+1;
    while(r>=1 && c<=m){
        ans+=v[r][c]; r--;c++;
    }
    r = i+1; c =j-1;
    while(r<=n && c>=1){
        ans+=v[r][c];r++;c--;
    }
    r = i-1;c = j-1;
    while(r>=1 && c>=1){
        ans+=v[r][c]; r--;c--;
    }
    final = max(final,ans);
}
}
cout<<final<<endl;
t--;}
}