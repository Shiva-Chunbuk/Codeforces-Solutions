#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
while(a--){
    int n;
    cin>>n;
if(n==2){
    cout<<1<<" "<<3<<"\n";
 
}
else if(n&1){
    int i=1;
    while(i<=n){
        cout<<1<<' ';
        i++;
    }
    cout<<"\n";
}
else{
    cout<<1<<" "<<2<<" "<<3<<" ";
    int i=4;
    while(i<=n){
        cout<<2<<' ';
        i++;
    }
    cout<<endl;
}
}
}