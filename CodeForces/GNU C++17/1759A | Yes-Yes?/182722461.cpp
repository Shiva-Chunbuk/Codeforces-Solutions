#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s="Yes";
    for(int i=0; i<20; i++){
        s=s+"Yes";
    }
    while(t--){
     string str;
     cin>>str;
     if(s.find(str)!=-1){
        cout<<"yes"<<endl;
     }
     else{
        cout<<"no"<<endl;
     }
    }
    }