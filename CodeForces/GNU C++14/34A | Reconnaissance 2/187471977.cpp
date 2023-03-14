#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=INT_MAX;
    int p1,p2;
    for(int i=0;i<n;i++){
        int sub=0;
        if(i<=n-2){
            sub=abs(v[i+1]-v[i]);
        }
        else{
            sub=abs(v[n-1]-v[0]);
        }
        if(sub<min){
            min=sub;
            p1=i+1;
            p2=i+2;
        }
    }
    if(p1>n)
    p1-=n;
    else if(p2>n)
    p2-=n;
    cout<<p1<<" "<<p2;
}