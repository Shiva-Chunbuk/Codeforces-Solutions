#include<bits/stdc++.h>
using namespace std;
#define end '\n'
#define int long long
void miller(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
   if((x1-x2==0 ||x2-x3==0 ||x3-x1==0)&& (y2-y1==0 ||y3-y1==0 ||y2-y3==0)){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }}
 signed main()
 {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test=1;
    cin>>test;
    while(test--){
        miller();
 
    }
    return 0;
 
   }