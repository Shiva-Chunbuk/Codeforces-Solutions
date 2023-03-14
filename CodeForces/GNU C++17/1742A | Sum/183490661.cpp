#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a+b==c || b+c==a ||a+c==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}