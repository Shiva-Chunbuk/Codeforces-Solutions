/******************************************************************************
 
                              //String
 
*******************************************************************************/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
    cin>>s;
    string a="";
    for(int i=1;i<s.length();i++){
        a+=s[i];
    }
    ll m=stoll(a);
    cout<<m%2<<'\n';
}