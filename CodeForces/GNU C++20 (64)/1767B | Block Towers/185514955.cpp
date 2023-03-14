#include<bits/stdc++.h>
using namespace std;
    #define ll long long
    #define pb push_back
void miller(){
    int num;
    cin>>num;
    vector<int>x(num);
    for(int i=0;i<num;++i)cin>>x[i];
    sort(x.begin()+1,x.end());
    ll output=x[0];
    for(int i=1;i<num;++i){
        if(output<x[i]){
            output+=(x[i]-output+1)/2;
 
        }
        
    }
    cout<<output<<endl;
}
 
int main(){
    int testcase;cin>>testcase;
while(testcase--)
    miller();
    return 0;
 
 
}