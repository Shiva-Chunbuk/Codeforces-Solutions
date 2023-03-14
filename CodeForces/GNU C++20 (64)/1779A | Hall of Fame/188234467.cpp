#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define forn(i,r,n) for (int i=r;i<int(n);++i)
void miller(){
    int a;string s;
    cin>>a>>s;
    int x=0;
    for(auto i:s){
        if(i=='R')x++;
    }
    if(x==0 ||x==a){
cout<<-1<<endl;
return;
    }
    for(int i=0;i<a;++i){
        if(s[i]=='L' && s[i+1]=='R'){
            cout<<i+1<<endl;
            return;
        }
        if(s[i]=='R'&& s[i+1]=='L'){
            cout<<0<<endl;
            return;
        }
    }
}
int main(){
int test;
cin>>test;
while(test--)miller();
return 0;
}