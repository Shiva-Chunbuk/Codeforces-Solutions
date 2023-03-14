#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            count++;
        }
    }
    if(count!=1){
        for(int j=0;j<n;j++){
            if(a[j]%2!=0){
                cout<<j+1;
                break;
            }
        }
    }
    else{
        for(int j=0;j<n;j++){
            if(a[j]%2==0){
                cout<<j+1;
                break;
            }
        }
    }
}